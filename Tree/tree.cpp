#include "tree.h"
//
//void test(int cnt)
//{
//    // ����Լ��� ���������� ����
//    if (cnt-- == 0)
//        return;
//
//    printf("%d\n", cnt);
//    test(cnt);  // ����Լ� ȣ��
//}

// ���� Ž�� Ʈ�� 
int main()
{
    BSearchTree bstree;
    bstree.insertdata(50);
    bstree.insertdata(30);
    bstree.insertdata(40);
    bstree.insertdata(20);
    bstree.insertdata(25);
    bstree.insertdata(60);
    bstree.insertdata(70);
    bstree.insertdata(58);
    bstree.insertdata(65);
    bstree.insertdata(68);
    bstree.insertdata(80);



    Node* node = bstree.searchdata(80);
    printf("ã�� �� �� �� ��ȸ?: %d\n", bstree.getVisitCount());
    cout << "=================================================\n";
    cout << "bstree.preorder();\n";
    bstree.preorder(); //���
    cout << "=================================================\n";
    cout << "bstree.inorder();\n";
    bstree.inorder(); //���
    cout << "=================================================\n";
    cout << "bstree.postorder();\n";
    bstree.postorder(); //���

 /*   test(10);*/

    return 0;
}