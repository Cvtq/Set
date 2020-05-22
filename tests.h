#pragma once
#include <iostream>
#include <assert.h>
#include "Set.h"

void testInsert() {
    {
        Set<int> set;
        set.insert(66);
        assert(set.isMember(66) == true);
    }
    {
        Set<int> set;
        set.insert(3);
        set.insert(8);
        set.insert(999);
        set.insert(44);
        assert(set.isMember(43) == false);
    }
    {
        Set<int> set;
        set.insert(3);
        set.insert(8);
        set.insert(999);
        set.insert(44);
        set.del(8);
        assert(set.isMember(8) == false);
    }
    cout << "����� ��� ������ insert ������" << endl;
}

void testDelete() {
    {
        Set<int> set;
        set.insert(66);
        set.del(66);
        assert(set.isMember(66) == false);
    }
    {
        Set<int> set;
        set.insert(3);
        set.insert(8);
        set.insert(999);
        set.insert(44);
        set.del(999);
        assert((set.isMember(99) == false) && (set.isMember(44) == true));
    }
    {
        Set<int> set;
        set.insert(3);
        set.insert(8);
        set.insert(999);
        set.insert(44);
        set.del(3);
        assert(set.isMember(8) == true);
    }
    cout << "����� ��� ������ del ������" << endl;
}

void testIsMember(){
    {
        Set<int> set;
        set.insert(3);
        assert(set.isMember(3) == true);        
    }
    {
        Set<int> set;
        set.insert(3);
        set.insert(8);
        set.insert(999);
        set.insert(44);
        assert(set.isMember(2) == false);
    }
    {
        Set<int> set;
        set.insert(3);
        set.insert(8);
        set.insert(999);
        set.insert(44);
        assert(set.isMember(999) == true);
    }
    cout << "����� ��� ������ isMember ������" << endl;
}

void testAll() {
    testInsert();
    testDelete();
    testIsMember();
    cout << "��� ����� ������ �������" << endl;
}