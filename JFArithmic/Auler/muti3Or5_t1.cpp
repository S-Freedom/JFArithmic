//
//  Auler1.cpp
//  JFArithmic
//
//  Created by 黄鹏飞 on 2022/1/18.
//

#include "muti3Or5_t1.hpp"
int _multuply3or5(){
    
    int result = 0;
//    for(int i=0;i<1000;i++){
//        if(i % 3 == 0 || i % 5 == 0){
//            result +=i;
//        }
//    }
    
    // 1000以内3的倍数+5的倍数-15的倍数
    int t3 = (3+999)*333/2;
    int t5 = (5+995)*199/2;
    int t15 = (15+990)*66/2;
    result = t3 + t5 - t15;
    return result;
}
