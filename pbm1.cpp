#include <iostream>
#include <limits>

 struct Node 
 {
    int data;
    Node* next;
    
    Node(int value) : data(value), next(nullptr) {}
};

 void insert(Node*& head, int value)
  {
    Node* newNode = new Node(value);
    if (head == nullptr)
     {
        head = newNode;
    } else
     {
        Node* temp = head;
        while (temp->next != nullptr) 
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

 int findDifference(Node* head)
  {
    if (head == nullptr) {
        return 0;
    }

    int minVal = std::numeric_limits<int>::max();
    int maxVal = std::numeric_limits<int>::min();

    Node* temp = head;
    while (temp != nullptr)
     {
        if (temp->data < minVal)
        {
            minVal = temp->data;
        }
        if (temp->data > maxVal)
        {
            maxVal = temp->data;
        }
        temp = temp->next;
    }

    return maxVal - minVal;
}

 void deleteLinkedList(Node*& head)
 {
    while (head != nullptr)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main()
{
    Node* head = nullptr;
    int value;
    std::cout << std::endl;
    while (true)
    {
        std::cin >> value;
        if (value == -1)
        {
            break;
        }
        insert(head, value);
    }
    
    int difference = findDifference(head);
    std::cout  << difference << std::endl;
    
    deleteLinkedList(head); 
    return 0;
}
