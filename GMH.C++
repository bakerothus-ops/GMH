#include <stdio.h>
#include "YO.bat"

int main() {
  // Command to run the VBS file using wscript.exe
    // Ensure the path is correct and enclosed in quotes if it contains spaces
    const char* vbsCommand = "wscript.exe \"Downloads\Idk.vbs\"";

    // Execute the command
    // The return value can be used to check if the command was executed,
    // though it might not always reflect the script's exit status.
    int result = system(vbsCommand);

    // You can add error checking if needed
    if (result == -1) {
        // Handle error
    }


  return 0;
}
