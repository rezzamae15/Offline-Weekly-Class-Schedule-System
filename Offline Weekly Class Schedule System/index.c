#include <stdio.h>

int main() {
 char name[30]; 
     printf("MY WEEKLY SCHEDULE\n");
    printf("student info: ");
  scanf("%s", name);
  
        printf ("  1. Monday\n  2. Tuesday\n  3. Wednesday\n  4. Thursday\n  5. Friday\n  6. Saturday\n");
    printf("Enter the day number (1-6) to see your schedule: ");
    int day;
    scanf("%d", &day);
  switch(day) {
        case 1:
            printf("Hello %s, your schedule for Monday is:\n- 9:00 AM: Math\n- 11:00 AM: Physics\n- 2:00 PM: Literature\n", name);
            break;
        case 2:
            printf("Hello %s, your schedule for Tuesday is:\n- 10:00 AM: Chemistry\n- 1:00 PM: History\n- 3:00 PM: Art\n", name);
            break;
        case 3:
            printf("Hello %s, your schedule for Wednesday is:\n- 9:00 AM: Biology\n- 12:00 PM: Physical Education\n- 2:00 PM: Music\n", name);
            break;
        case 4:
            printf("Hello %s, your schedule for Thursday is:\n- 10:00 AM: Computer Science\n- 1:00 PM: Economics\n- 3:00 PM: Drama\n", name);
            break;
        case 5:
            printf("Hello %s, your schedule for Friday is:\n- 9:00 AM: Geography\n- 11:00 AM: Philosophy\n- 2:00 PM: Sociology\n", name);
            break;
        case 6:
            printf("Hello %s, your schedule for Saturday is:\n- 10:00 AM: Sports Practice\n- 1:00 PM: Club Meeting\n", name);
            break;
        default:
            printf("Invalid day number. Please enter a number between 1 and 6.\n");
    }
    return 0;
}  
    