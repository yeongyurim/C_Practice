#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int arr[] = {0, 1, 2, 3, 4};

int main() {
    pid_t pid = fork();
    if (pid == 0) {
        // 자식 프로세스
        for (int i = 0; i < 5; i++) {
            arr[i] *= -arr[i];
        }
        for (int i = 0; i < 5; i++) {
            printf("CHILD: %d\n", arr[i]);
        }
        // 자식 프로세스 - ls 명령 실행
        execlp("ls", "ls", "-la", NULL);
        // execlp 실패할 경우
        perror("execlp failed");
    } else {
        // 부모 프로세스
        wait(NULL);
        for (int i = 0; i < 5; i++) {
            printf("PARENT: %d\n", arr[i]);
        }
    }

    return 0;
}
