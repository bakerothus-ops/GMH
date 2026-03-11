#include <stdio.h>
#include <unistd.h>
#include <windows.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main() {
 while (1) {
 char g = getch();
 int x 10, y 10;

 if (g == 'S' || g == 's')

  cin>>x>>y;
  SetCursorPos(x, y);
 }

 sleep(30);

  // Command to run the VBS file using wscript.exe
    // Ensure the path is correct and enclosed in quotes if it contains spaces
    const char* vbsCommand = "wscript.exe \"Idk.vbs"";

    // Execute the command
    // The return value can be used to check if the command was executed,
    // though it might not always reflect the script's exit status.
    int result = system(vbsCommand);

    // You can add error checking if needed
    if (result == -1) {
        // Handle error
    }


}
 sleep(10);
  return 99;
}
