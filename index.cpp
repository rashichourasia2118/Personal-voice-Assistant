#include <bits/stdc++.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <ctime>

using namespace std;

// function to greet me
void greetRashi()
{
    // according to time
    time_t now = time(0);
    tm *time = localtime(&now);
    if (time->tm_hour < 12)
    {
        cout << "Rashi, Good Morning" << endl;
        string phrase = "Rashi, Good Morning";
        string command = "espeak \"" + phrase + "\"";
        const char *charcommand = command.c_str();
        system(charcommand);
    }
    else if (time->tm_hour >= 12 && time->tm_hour <= 16)
    {
        cout << "Rashi, Good Afternoon" << endl;
        string phrase = "Rashi, Good Afternoon";
        string command = "espeak \"" + phrase + "\"";
        const char *charcommand = command.c_str();
        system(charcommand);
    }
    else if (time->tm_hour > 16 && time->tm_hour < 21)
    {
        cout << "Rashi, Good Evening" << endl;
        string phrase = "Rashi, Good Evening";
        string command = "espeak \"" + phrase + "\"";
        const char *charcommand = command.c_str();
        system(charcommand);
    }
    else if (time->tm_hour >= 21)
    {
        cout << "Rashi, Good Day" << endl;
        string phrase = "Rashi, Good Day";
        string command = "espeak \"" + phrase + "\"";
        const char *charcommand = command.c_str();
        system(charcommand);
    }
}
void dateTime()
{
    time_t now = time(0);
    char *dt = ctime(&now);
    cout << "the Date and Time is" << endl
         << dt << endl;
}
int main()
{
    system("cls");
    cout << "\t<*************** RASHI'S PERSONAL ASSISTANT ***************" << endl
         << endl;
    string password; // to take password
    string command;  // to take command from user
    do
    {
        cout << "------------------------------------------------------" << endl;
        cout << "| PASSWORD FOR RASHI'S PERSONAL ASSISTANT|" << endl;
        cout << "------------------------------------------------------" << endl
             << endl;
        string phrase = "| PASSWORD FOR RASHI'S PERSONAL ASSISTANT|";
        string command = "espeak \"" + phrase + "\"";
        const char *charcommand = command.c_str();
        system(charcommand);
        getline(cin, password);
        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};
        if (password == "the_rashichourasia")
        {
            cout << "\n<**************************************************************************************************>\n\n";
            greetRashi();
            do
            {
                cout << "\n<**********************************************************************************************>\n\n";
                cout << endl
                     << "Rashi , do you need any help" << endl
                     << endl;
                string phrase = "Rashi , do you need any help";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);
                cout << "Order me : ";
                getline(cin, command);
                cout << endl;
                cout << "result:";
                if (command == "Hello" || command == "Hi" || command == "Hey")
                {
                    cout << "Hello, Rashi" << endl;
                    string phrase = "Hello, Rashi";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if (command == "what is the time")
                {

                    dateTime();
                }

                else if (command == "who are you" || command == "who is speaking")
                {
                    cout << "I am Rashi's Personal Assitance !!!" << endl;
                    string phrase = "I am Rashi's Personal Assitance !!!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if (command == "open notepad")
                {
                    cout << "opening notepad" << endl;
                    string phrase = "opening notepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\system32\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }
                else if (command == "open ms excel")
                {
                    cout << "opening Microsoft Excel" << endl;
                    string phrase = "opening Microsoft Excel";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\root\\Office16\\EXCEL.EXE"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if (command == "open ms word")
                {
                    cout << "opening Microsoft Word" << endl;
                    string phrase = "opening Microsoft Word";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\root\\Office16\\WINWORD.EXE"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }
                else if (command == "paint")
                {
                    cout << "opening paint" << endl;
                    string phrase = "opening phrase";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                //     else if (command == "play song")
                //     {
                //         cout << "playing song" << endl;
                //         string phrase = "playing song";
                //         string command = "espeak \"" + phrase + "\"";
                //         const char *charCommand = command.c_str();
                //         system(charCommand);
                //         mciSendString("open \"despacito_justin_bieber.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
                //         mciSendString("play mp3", NULL, 0, NULL);
                //     }
                else if (command == "open rashi documents")
                {
                    cout << "opening rashi documents" << endl;
                    string phrase = "opening rashi documents";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("D:\\rashi documents"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }
                else if (command == "open google")
                {
                    cout << "opening google" << endl;
                    string phrase = "opening google";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }

                else if (command == "open youtube")
                {
                    cout << "opening YouTube" << endl;
                    string phrase = "opening youtube";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }
                else if (command == "close chrome browser")
                {
                    cout << "closing chrome browser" << endl;
                    string phrase = "closing chrome browser";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("TASKKILL /IM chrome.exe /F");
                }
                else if (command == "open photo")
                {
                    cout << "opening photo" << endl;
                    string phrase = "opening photo";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL, "open", "wal.jpg", NULL, NULL, SW_NORMAL);
                }
                else if (command == "open video")
                {
                    cout << "opening video" << endl;
                    string phrase = "opening video";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL, "open", "https://www.youtube.com/watch?v=5Eqb_-j3FDA", NULL, NULL, SW_NORMAL);
                }

                else if (command == "bye" || command == "exit")
                {
                    cout << "Good Bye Rashi" << endl;
                    string phrase = "Good Bye Rashi";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }
                else
                {
                    cout << "Sorry could not understand your command please try again !!!" << endl;
                    string phrase = "Sorry could not understand your command please try again";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
            } while (1);
        }
        else
        {
            system("cls");

            cout << "\t<###################################  PERSONAL ASSISSTANT ########################################" << endl
                 << endl;
            cout << "**********************" << endl;
            cout << "X Incorrect Password X" << endl;
            cout << "**********************" << endl
                 << endl;

            string phrase = "Incorrect Password, please enter correct password";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
        }
    } while (1);

    return 0;
}
