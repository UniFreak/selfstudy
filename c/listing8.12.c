#include <stdio.h>

struct student1 {
    long number;
    char name[10];
    char sex;
    float score[3];
};

struct student1 s1[3] = {{100001L, "qian1", 'm', {78, 86, 92}},
                        {100002L, "sun1", 'f', {85, 69, 83}},
                        {100003L, "li1", 'm', {84, 88, 96}}};

struct student2 {
    long number;
    char name[10];
    char sex;
    float score[3];
} s2[3] = {{200001L, "qian2", 'm', {78, 86, 92}},
            {200002L, "sun2", 'f', {85, 69, 83}},
            {200003L, "li2", 'm', {84, 88, 96}}};

struct {
    long number;
    char name[10];
    char sex;
    float score[3];
} s3[3] = {{300001L, "qian2", 'm', {78, 86, 92}},
            {300002L, "sun2", 'f', {85, 69, 83}},
            {300003L, "li2", 'm', {84, 88, 96}}};

int main() {}