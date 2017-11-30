#include "Possessions.h"
#include "Item.h"
#include <iostream>
#include <string.h>
#include "Character.h"


using namespace std;

Possessions :: Possessions(){
	m_pRoot = NULL;

}

Possessions :: ~Possessions(){


	
	destroyTree(m_pRoot);
	
}






bool Possessions :: addItem(Item *newItem){

	 cout << "addItem was reached" << endl;

	 Item *temp, *back;
	 temp = m_pRoot;
	 back = NULL;

	 while (temp != NULL)
	 {
		 back = temp;
		 if (strcmp(temp->m_sItemName, newItem->m_sItemName) > 0 )
		 {
			 temp = temp->m_pLeft;
		 }else{
			 temp = temp->m_pRight;
		 }

	 }

	 if (back == NULL)
	 {
		 m_pRoot = newItem;

	 } else if(strcmp(newItem->m_sItemName, back->m_sItemName) < 0 )
	 {
		 back->m_pLeft = newItem;
	 }else{
		 back->m_pRight = newItem;
	 }

	 return true;
 };

Item *Possessions :: dropItem(char *itemName){

	 cout << "dropItem was reached" << endl;

	 Item *temp, *back, *delNode, *delParent;

	 Item *dupNode = new Item;

	 temp = m_pRoot;
	 back = NULL;

	 while ((temp != NULL)&&(strcmp(temp->m_sItemName, itemName) != 0))
	 {
		 back = temp;
		 if(strcmp(temp->m_sItemName, itemName) > 0){
			 temp = temp->m_pLeft;
		 }else
		 {
			 temp = temp->m_pRight;
		 }
	 }


	 if (m_pRoot == NULL)
	 {
		 return NULL;
	 }else if(temp == NULL){
		 return NULL;
	 }
	 else
	 {
		 delNode = temp;
		 delParent = back;
	 }

	 if (delNode->m_pRight == NULL)
	 {
		 if(delParent == NULL){
			 m_pRoot = delNode->m_pLeft;
			 delNode->m_pLeft = NULL;
			 return delNode;
		 }else
		 {
			 if (delParent->m_pLeft == delNode)
			 {
				 delParent->m_pLeft = delNode->m_pLeft;

			 }else
			 {
				 delParent->m_pRight = delNode -> m_pLeft;
			 }
			 delNode->m_pLeft = NULL; //comeback
			 return delNode;
		 }
	 }
	 else
	 {
		 if(delNode->m_pLeft == NULL){
			 if(delParent == NULL){
				 m_pRoot = delNode->m_pRight;
				 delNode->m_pRight = NULL;  // another possiblr error
				 return delNode;
			 }
			 else{

				 if(delParent->m_pLeft = delNode){
					 delParent->m_pLeft = delNode->m_pRight;
				 }
				 else
				 {
					 delParent->m_pRight = delNode->m_pRight;
				 }
				 delNode->m_pRight = NULL;
				 return delNode;
			 }
		 }
		 else
		 {
			 temp = delNode->m_pLeft;
			 back = delNode;
			 
			 dupNode->m_dValue = delNode->m_dValue;
			 dupNode->m_dWeight = delNode->m_dWeight;
			 dupNode->m_iType = delNode->m_iType;
			 strcpy(dupNode->m_sItemName, delNode->m_sItemName);
			 strcpy(dupNode->m_sDesc, delNode->m_sDesc);

			 dupNode->m_pLeft = NULL;
			 dupNode->m_pRight = NULL;


			 while (temp->m_pRight != NULL)
			 {
				 back = temp;
				 temp =temp->m_pRight;

			 }
			 strcpy(delNode->m_sItemName, temp->m_sItemName);
			 delNode->m_dValue = temp->m_dValue;
			 delNode->m_dWeight = temp->m_dWeight;
			 delNode->m_iType = temp->m_iType;
			 strcpy(delNode->m_sDesc,temp->m_sDesc);

			 if (back == delNode)
			 {
				 back->m_pLeft = temp->m_pLeft;
			 }else
			 {
				 back->m_pRight = temp->m_pLeft;
			 }

			 return dupNode;

		 }
	 }



	return NULL;
}

Item *Possessions :: getItem(char *itemName){

	 cout << "getItem was reached" << endl;

	 Item *temp;

	 temp = m_pRoot;
	 while ((temp != NULL)&&(strcmp( itemName,temp->m_sItemName) != 0))
	 {
		 if(strcmp( itemName,temp->m_sItemName) < 0)
		 {
			 temp = temp->m_pLeft;
		 
		 }
		 else
		 {
			 temp = temp->m_pRight;
		 }
	 }
	 if (temp == NULL)
	 {
		 return NULL;
	 }else
	 {
		 return temp;
	 }

	
}

void Possessions :: printTree(){



	printAll(m_pRoot);


	 cout << "PrintTree was reached" << endl;
	
}


void Possessions :: printOne(Item *item){


	cout << item->m_sItemName << "\t\t" << item->m_dValue << "\t\t" << item->m_dWeight << "\t\t" << item->m_iType << "\t\t" << endl;



	 cout << "PrintOne was reached" << endl;

}
void Possessions ::destroyTree(Item *rt){

	if(rt == NULL){
		return;
	}
	if(rt->m_pLeft != NULL){
		destroyTree(rt->m_pLeft);
	}
	if (rt->m_pRight != NULL)
	{
		destroyTree(rt->m_pRight);
	}
	delete rt;
}


void Possessions ::printAll(Item *rt){

	if (rt != NULL)
	{
		printAll(rt->m_pLeft);
		printOne(rt);
		printAll(rt->m_pRight);
	}

	

	 cout << "printAll was reached" << endl;

}
