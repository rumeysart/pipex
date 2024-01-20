#include <unistd.h>
#include <stdio.h>

int main() {
    char *const argv[] = {"/usr/bin/wc", "-l", NULL};
    char *const envp[] = {NULL};

    if (execve("/usr/bin/wc", argv, envp) == -1) {
        perror("execve");
        return 1;
    }

    // Bu noktaya asla ulaşılmaz, çünkü execve işlemi başarılı olursa, bu programın çalışması sona erer.
    return 0;
}
 