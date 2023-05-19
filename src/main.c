#include <signal.h>
#include <unistd.h>
#include <time.h>



int main(int argc, char* argv[], char* envp[]) {
    time_t cur_time, finish_time;

    time(&cur_time);
    full_sim();
    time(&finish_time);

    return 0;
}