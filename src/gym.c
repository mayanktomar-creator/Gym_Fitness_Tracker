#include <stdio.h>
#include "gym.h"

float get_bmi(float w, float h)
{
    float bmi = 0;
    if(h > 0){
        bmi = w / (h * h);
    }
    return bmi;
}

void show_level(float bmi)
{
    if(bmi < 18.5)
        printf("Fitness Level : Weak (Need weight gain)\n");
    else if(bmi < 25)
        printf("Fitness Level : Fit (Good for gym training)\n");
    else if(bmi < 30)
        printf("Fitness Level : Heavy (Start slow training)\n");
    else
        printf("Fitness Level : Very Heavy (Walking + Diet required)\n");
}

void gym_routine(float bmi)
{
    printf("\n--- Recommended Gym Routine ---\n");

    if(bmi < 18.5){
        printf("Beginner Bulk Plan:\n");
        printf("- Light dumbbells\n");
        printf("- Pushups, squats\n");
        printf("- Protein diet\n");
    }
    else if(bmi < 25){
        printf("Standard Fitness Plan:\n");
        printf("- Treadmill 10 mins\n");
        printf("- Chest press, shoulders\n");
        printf("- Core workout\n");
    }
    else if(bmi < 30){
        printf("Weight Loss Plan:\n");
        printf("- Walking 20–30 mins\n");
        printf("- Cycling\n");
        printf("- Low-weight machines\n");
    }
    else {
        printf("Heavy Weight Loss Plan:\n");
        printf("- Slow walking 45 mins\n");
        printf("- Simple stretches only\n");
        printf("- Strict diet control\n");
    }
}

void save_member(Member m, float bmi)
{
    FILE *fp = fopen("gym_members.txt", "a");
    if(!fp){
        printf("Could not open file.\n");
        return;
    }

    fprintf(fp, "Name : %s\nAge : %d\nWeight(in Kg) : %.2f\nHeight(in meters) : %.2f\nBMI=%.2f\n\n\n",
            m.name, m.age, m.weight, m.height, bmi);

    fclose(fp);
}

void view_members()
{
    FILE *fp = fopen("gym_members.txt", "r");

    if(!fp){
        printf("No member data found.\n");
        return;
    }

    printf("\n--- Saved Gym Members ---\n");

    char line[200];
    while(fgets(line, sizeof(line), fp)){
        printf("%s", line);
    }

    fclose(fp);
}
