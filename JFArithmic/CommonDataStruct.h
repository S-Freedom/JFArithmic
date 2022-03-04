//
//  CommonDataStruct.h
//  JFArithmic
//
//  Created by 黄鹏飞 on 2022/3/3.
//

#ifndef CommonDataStruct_h
#define CommonDataStruct_h

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

#endif /* CommonDataStruct_h */
