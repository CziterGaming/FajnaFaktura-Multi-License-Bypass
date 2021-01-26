#include <iostream>
#include <sys/stat.h>
#include <fstream>
#include <random>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <Shlobj.h>
#include <Lmcons.h>
#include <filesystem>

using namespace std;

int main()
{
    ofstream file;

    int max = 26;

    int e = 0;

    srand(time(NULL));

    int variables[11];

    char chars[11];

    char hex[11];

    char* hexx[11];

    cout << "FajnaFaktura Multi License Bypasser\nMade by CziterGaming\n"<<endl;
    Sleep(500);
    cout << "Initializing."; 
    Sleep(100);
    cout << "."; 
    Sleep(100);
    cout << "."<< endl;

    fstream multidri("multi.dri");

    if (multidri.fail())
    {
        cout << "File \"multi.dri\" not found. Make sure to copy it into the same directory as this program." << endl;
        cout << "Exitting..." << endl;
        system("pause");
        return 0;
    }
    
    fstream ipetmslx("ipetm.slx");

    if (ipetmslx.fail())
    {
        cout << "File \"ipetm.slx\" not found. Make sure to copy it into the same directory as this program." << endl;
        cout << "Exitting..." << endl;
        system("pause");
        return 0;
    }

    cout << "Generating random characters.";
    Sleep(1000);
    cout << ".";
    Sleep(1000);
    cout << ".\n";
    Sleep(500);
    cout << "Generated characters:" << endl;
    cout << "\nCharaster | HEX" << endl;

    for (e; e < 11; e++)
    {
        variables[e] = rand() % max;

        chars[e] = 'a' + variables[e];

        sprintf_s(hex, "0x%02X", chars[e]);

        Sleep(100);
        hexx[e] = hex;
        cout <<"     "<< chars[e] << "    :   " << hexx[e] <<  endl;

    }

    //multi.dri

    TCHAR username[UNLEN + 1];
    DWORD size = UNLEN + 1;

    (GetUserName((TCHAR*)username, &size));

    string syslet = getenv("SystemDrive");

    string path = getenv("appdata");
    path.append("\\Drimar\\ff\\multi.dri");
    
    cout << "\nSearching for file \"multi.dri\" in directory:"<<endl;

    cout << syslet << "\nLUsers\n   L"; 
    wcout << username; 
    cout << "\n      LAppdata\n          LRoaming\n              LDrimar\n                   Lff\n" << endl;
    cout << ".";
    Sleep(1000);
    cout << ".";
    Sleep(1000);
    cout << ".";
    Sleep(1000);
    
    fstream binaryFile0(path.c_str(), ios::in | ios::out | ios::binary);

    if (binaryFile0.fail())
    {
        cout << "File not found at: " << endl;
        cout << syslet << "/Users/";
        wcout << username;
        cout << "/Roaming/Drimar/ff/\n" << endl;
        cout << "Copying multi.dri to directory above." << endl;

        string isdrimarexist = getenv("appdata");
        isdrimarexist.append("\\Drimar\\");

        struct stat info;

        if (stat(isdrimarexist.c_str(), &info) != 0)
        {
            cout << "Folder \"Drimar\" not found. Creating it in Roaming folder." << endl;
            Sleep(3000);
            
            int folderdrimar;

            wstring folderdrimar_ = wstring(isdrimarexist.begin(), isdrimarexist.end());

            const wchar_t* folderdrimar1 = folderdrimar_.c_str();

            folderdrimar = _wmkdir(folderdrimar1);
        }
        else if (info.st_mode & S_IFDIR)
        {
            cout << "File exist. Error.";
        }
        else 
        {
            cout << "There is a problem with accessing Roaming folder." << endl;
            system("pause");
        }
        
        string isffexist = getenv("appdata");
        isffexist.append("\\Drimar\\ff");

        struct stat info1;

        if (stat(isffexist.c_str(), &info1) != 0)
        {
            cout << "Folder \"ff\" not found. Creating it in Roaming folder." << endl;
            
            int folderff;

            wstring folderff_ = wstring(isffexist.begin(), isffexist.end());

            const wchar_t* folderff1 = folderff_.c_str();

            folderff = _wmkdir(folderff1);

            SetFileAttributesA(isffexist.c_str(), FILE_ATTRIBUTE_HIDDEN);
        }
        else if (info1.st_mode & S_IFDIR)
        {
            cout << "%s is a directory\n";
        }
        else 
        {
            cout << "There is a problem with accessing \"Drimar\" folder inside Roaming folder." << endl;
            system("pause");
        }

        ifstream  src("multi.dri", ios::binary);
        ofstream  dst(path.c_str(), ios::binary);
        dst << src.rdbuf();
        cout << "Restarting..." << endl;
        Sleep(3000);
        system("cls");
        main();
    }
    else
    {
        cout << "File found. Implemeting random HEX values.\n\n" << endl;
        Sleep(2000);
    }

    fstream binaryfile0("e:/desktop/nowy folder (3)/test2.txt", ios::in | ios::out | ios::binary);

    binaryfile0.seekp(0x13cc);
    cout << "looking for: 0x13cc and replacing value with: " << chars[0] << endl;
    binaryfile0 << char(chars[0]);
    Sleep(100);
    
    binaryfile0.seekp(0x13cd);
    cout << "looking for: 0x13cd and replacing value with: " << chars[1] << endl;
    binaryfile0 << char(chars[1]);
    Sleep(100);

    binaryfile0.seekp(0x13ce);
    cout << "looking for: 0x13ce and replacing value with: " << chars[2] << endl;
    binaryfile0 << char(chars[2]);
    Sleep(100);

    binaryfile0.seekp(0x13cf);
    cout << "looking for: 0x13cf and replacing value with: " << chars[3] << endl;
    binaryfile0 << char(chars[3]);
    Sleep(100);

    binaryfile0.seekp(0x13d0);
    cout << "looking for: 0x13d0 and replacing value with: " << chars[4] << endl;
    binaryfile0 << char(chars[4]);
    Sleep(100);

    binaryfile0.seekp(0x13d1);
    cout << "looking for: 0x13d1 and replacing value with: " << chars[5] << endl;
    binaryfile0 << char(chars[5]);
    Sleep(100);

    binaryfile0.seekp(0x13d2);
    cout << "looking for: 0x13d2 and replacing value with: " << chars[6] << endl;
    binaryfile0 << char(chars[6]);
    Sleep(100);

    binaryfile0.seekp(0x13d3);
    cout << "looking for: 0x13d3 and replacing value with: " << chars[7] << endl;
    binaryfile0 << char(chars[7]);
    Sleep(100);

    binaryfile0.seekp(0x13d4);
    cout << "looking for: 0x13d4 and replacing value with: " << chars[7] << endl;
    binaryfile0 << char(chars[8]);
    Sleep(100);

    binaryfile0.seekp(0x13d5);
    cout << "looking for: 0x13d5 and replacing value with: " << chars[8] << endl;
    binaryfile0 << char(chars[9]);
    Sleep(100);

    binaryfile0.seekp(0x13d6);
    cout << "looking for: 0x13d6 and replacing value with: " << chars[10] << endl;
    binaryfile0 << char(chars[10]);
    Sleep(100);

    cout << "implemented." << endl;
    Sleep(1000);

    //ipetm.slx

    system("cls");
    
    cout << "fajnafaktura multi license bypasser\nmade by czitergaming" << endl;
    cout << "searching for file \"ipetm.slx\" in directory:" << endl;

    cout << syslet << "\nlusers\n   l";
    wcout << username;
    cout << "\n      lappdata\n          lroaming\n              ldrimar\n                   lff\n                     ldrimar\n                        lctr\n" << endl;

    cout << ".";
    Sleep(1000);
    cout << ".";
    Sleep(1000);
    cout << ".";
    Sleep(1000);

    string path2 = getenv("appdata");
    path2.append("\\drimar\\ff\\drimar\\ctr\\ipetm.slx");

    fstream binaryfile1(path2.c_str(), ios::in | ios::out | ios::binary);

    if (binaryfile1.fail())
    {
        cout << "file not found at: " << endl;
        cout << syslet << "/users/";
        wcout << username;
        cout << "/roaming/drimar/ff/drimar/ctr/\n" << endl;
        cout << "copying ipetm.slx to directory above." << endl;
        
        string isdrimarinffexist = getenv("appdata");
        isdrimarinffexist.append("\\Drimar\\ff\\Drimar");

        struct stat info3;

        if (stat(isdrimarinffexist.c_str(), &info3) != 0)
        {
            cout << "Folder \"Drimar\" not found. Creating it in \"ff\" folder." << endl;

            Sleep(3000);

            int folderdrimarinff;

            wstring folderdrimarinff_ = wstring(isdrimarinffexist.begin(), isdrimarinffexist.end());

            const wchar_t* folderdrimarinff1 = folderdrimarinff_.c_str();

            folderdrimarinff = _wmkdir(folderdrimarinff1);
        }
        else if (info3.st_mode & S_IFDIR)
        {
            cout << "%s is a directory\n";
        }
        else
        {
            cout << "There is a problem with accessing \"Drimar\" folder inside \"ff\" folder." << endl;
            system("pause");
        }

        string isctrexist = getenv("appdata");
        isctrexist.append("\\Drimar\\ff\\Drimar\\ctr");

        struct stat info4;

        if (stat(isctrexist.c_str(), &info4) != 0)
        {
            cout << "Folder \"ctr\" not found. Creating it in \"Drimar\" folder." << endl;
            Sleep(3000);

            int folderctr;

            wstring folderctr_ = wstring(isctrexist.begin(), isctrexist.end());

            const wchar_t* folderctr1 = folderctr_.c_str();

            folderctr = _wmkdir(folderctr1);
        }
        else if (info4.st_mode & S_IFDIR)
        {
            cout << "%s is a directory\n";
        }
        else
        {
            cout << "There is a problem with accessing \"ctr\" folder inside \"Drimar\" folder." << endl;
            system("pause");
        }

        ifstream  src("ipetm.slx", ios::binary);
        ofstream  dst(path2.c_str(), ios::binary);
        dst << src.rdbuf();
        cout << "restarting..." << endl;
        Sleep(3000);
        system("cls");
        main();
    }
    else
    {
        cout << "file found. implemeting random hex values.\n\n" << endl;
        Sleep(2000);
    }

    binaryfile1.seekp(0x000);
    cout << "looking for: 0x000 and replacing value with: " << chars[0] << endl;
    binaryfile1 << char(chars[0]);
    Sleep(100);

    binaryfile1.seekp(0x001);
    cout << "looking for: 0x001 and replacing value with: " << chars[1] << endl;
    binaryfile1 << char(chars[1]);
    Sleep(100);

    binaryfile1.seekp(0x002);
    cout << "looking for: 0x002 and replacing value with: " << chars[2] << endl;
    binaryfile1 << char(chars[2]);
    Sleep(100);

    binaryfile1.seekp(0x003);
    cout << "looking for: 0x003 and replacing value with: " << chars[3] << endl;
    binaryfile1 << char(chars[3]);
    Sleep(100);

    binaryfile1.seekp(0x004);
    cout << "looking for: 0x004 and replacing value with: " << chars[4] << endl;
    binaryfile1 << char(chars[4]);
    Sleep(100);

    binaryfile1.seekp(0x005);
    cout << "looking for: 0x005 and replacing value with: " << chars[5] << endl;
    binaryfile1 << char(chars[5]);
    Sleep(100);

    binaryfile1.seekp(0x006);
    cout << "looking for: 0x006 and replacing value with: " << chars[6] << endl;
    binaryfile1 << char(chars[6]);
    Sleep(100);

    binaryfile1.seekp(0x007);
    cout << "looking for: 0x007 and replacing value with: " << chars[7] << endl;
    binaryfile1 << char(chars[7]);
    Sleep(100);

    binaryfile1.seekp(0x008);
    cout << "looking for: 0x008 and replacing value with: " << chars[8] << endl;
    binaryfile1 << char(chars[8]);
    Sleep(100);

    binaryfile1.seekp(0x009);
    cout << "looking for: 0x009 and replacing value with: " << chars[9] << endl;
    binaryfile1 << char(chars[9]);
    Sleep(100);

    binaryfile1.seekp(0x00a);
    cout << "looking for: 0x00a and replacing value with: " << chars[10] << endl;
    binaryfile1 << char(chars[10]);
    Sleep(100);

    cout << "implemented." << endl;
    Sleep(1000);

    cout << "launching: fajnafaktura.exe\n";

    fstream ffexe("fajnafaktura.exe");

    if (ffexe.fail())
    {
        cout << "fajnafaktura.exe not found. put this program into it's directory.\n";
    }
    else
    {
        system("fajnafaktura.exe");

        cout << "program exit detected.\n";
    }

    system("pause");
}
