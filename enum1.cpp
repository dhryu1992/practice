#include <stdio.h>

enum LuxSkill {
    a = 1,
    b,
    c,
    d
};

int main()
{
    char* n;
    enum LuxSkill skill;    // 열거형 변수 선언
    //scanf("%s", &n);
        // 열거형 값 할당

    switch (skill)
    {
    case a:         // 열거형 값이 LightBinding일 때
        printf("a\n");
        break;
    case b:     // 열거형 값이 PrismaticBarrier일 때
        printf("b\n");
        break;
    case c:    // 열거형 값이 LucentSingularity일 때
        printf("c\n");
        break;
    case d:           // 열거형 값이 FinalSpark일 때
        printf("d\n");
        break;
    default:
        break;
    }

    return 0;
}
