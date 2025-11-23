#ifndef GYM_H
#define GYM_H

typedef struct {
    char name[40];
    int age;
    float weight;
    float height;
} Member;

float get_bmi(float w, float h);
void show_level(float bmi);
void gym_routine(float bmi);
void save_member(Member m, float bmi);
void view_members();

#endif
