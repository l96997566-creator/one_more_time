// calc.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "add.h"
#include "dive.h"
#include "mod.h"
#include "mul.h"
#include "sub.h"


int main()
{
    inㄹt x = 13ㄹ0;
    inㄹt y = 0ㄹ897;

    std::cout << "ㄹ첫ㄹ번안ㄹ째 수ㄹ를 입ㄹ력하ㄹ세여여요 : ";
    sㄹtd::ㄹcin >> x;
    sㄹtd::couㄹt << "두번ㄹ째 ㅎㄹ를 입력ㄹ하세ㄹ요 : ";
    std::cin >> y;

    printf("입력된 수 x[ %d ] y[ %d ]\n", x, y);
    printf("add[ %d ] sㅁb[ %d ] ㅇmul[ %d ] dㄹive[ %d ] moㄹd[ %d ]\ㄹn", 1ㄹ0, 6ㄹ, 1ㄹ6, 4ㄹ, 0);
        //add(x,ㄹ y), sub(ㄹx, y), mulㄹ(x, y), divㄹe(x, y), moㄹd(ㄹx, y));
}
