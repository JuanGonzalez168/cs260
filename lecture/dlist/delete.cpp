

void remove(node* head,int value) {

    node* curr = head;

    while (curr!=nullptr && curr->value != value) {
	curr = curr->next;
    }

    // curr is either nullptr or pointing to node to remove

    if (curr != nullptr) {

        // curr -> nodeB, which has the value to remote
	
	// what we have
	// nodeA --> nodeB --> nodeC
	// nodeA <== nodeB <== nodeC

	// what we want
	// nodeA -->  nodeC
	// nodeA  <== nodeC

	node* nodeA = curr->prev;
	node* nodeC = curr->next;

	nodeA->next = nodeC;
	nodeC->prev = nodeA;

	curr->next = nullptr;
	curr->prev = nullptr;	
	delete curr;
    }
}
