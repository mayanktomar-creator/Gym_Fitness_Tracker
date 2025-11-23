#include <stdio.h>
#include "gym.h"

int main()
{
    Member m;
    int ch;

    while(1){
        printf("\n===== GYM FITNESS TRACKER =====\n");
        printf("1. Add Gym Member\n");
        printf("2. View Member Records\n");
        printf("3. Exit\n");
        printf("Choose option: ");     //Take input from user
        scanf("%d", &ch);

        // If user want to add new member 
        if(ch == 1){
            printf("Enter name: ");
            scanf("%s", m.name);

            printf("Enter age: ");
            scanf("%d", &m.age);

            printf("Enter weight (kg): ");
            scanf("%f", &m.weight);

            printf("Enter height (meters): ");
            scanf("%f", &m.height);

            float bmi = get_bmi(m.weight, m.height);

            printf("\nBMI = %.2f\n", bmi);
            show_level(bmi);
            gym_routine(bmi);

            save_member(m, bmi);
        }

        //if user want to view members

        else if(ch == 2){
            view_members();
        }

        // for exit 

        else if(ch == 3){
            printf("Exiting program...\n");
            break;
        }
        else{
            printf("Invalid input.\n");
        }
    }

    return 0;
}
