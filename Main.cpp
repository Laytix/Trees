//do NOT include this when turning in assignment. This is just to test the class and its functions

#include <iostream>
//#include <string>
#include "Character.h"
#include <iomanip>

using namespace std;

int main()
{
	int i=333;
	
	//char name[65]="";
	Item *tempItem=NULL;

	Character c1("Archer",1,2,3,4,5,6,7,8,9);
	//c1.printAll();
	//Possessions *bag =new Possessions;
		
	
	//Creating items to use
	Item *bitem1=new Item;
	strcpy(bitem1->m_sItemName,"bitem 1");
	strcpy(bitem1->m_sDesc,"Battle Item 1");
	bitem1->m_dValue=1;
	bitem1->m_dWeight=1;
	bitem1->m_iType=BATTLE_ITEM;
	bitem1->m_pLeft=NULL;
	bitem1->m_pRight=NULL;

	
	Item *bitem2=new Item;
	strcpy(bitem2->m_sItemName,"bitem 2");
	strcpy(bitem2->m_sDesc,"Battle Item 2");
	bitem2->m_dValue=2;
	bitem2->m_dWeight=2;
	bitem2->m_iType=BATTLE_ITEM;
	bitem2->m_pLeft=NULL;
	bitem2->m_pRight=NULL;

	Item *bitem3=new Item;
	strcpy(bitem3->m_sItemName,"bitem 3");
	strcpy(bitem3->m_sDesc,"Battle Item 3");
	bitem3->m_dValue=3;
	bitem3->m_dWeight=3;
	bitem3->m_iType=1;
	bitem3->m_pLeft=NULL;
	bitem3->m_pRight=NULL;

	Item *bItem4=new Item;
	strcpy(bItem4->m_sItemName,"bitem 4");
	strcpy(bItem4->m_sDesc,"Battle Item 4");
	bItem4->m_dValue=4;
	bItem4->m_dWeight=4;
	bItem4->m_iType=BATTLE_ITEM;
	bItem4->m_pLeft=NULL;
	bItem4->m_pRight=NULL;

	Item *bitem5=new Item;
	strcpy(bitem5->m_sItemName,"bitem 5");
	strcpy(bitem5->m_sDesc,"Battle Item 5");
	bitem5->m_dValue=5;
	bitem5->m_dWeight=5;
	bitem5->m_iType=BATTLE_ITEM;
	bitem5->m_pLeft=NULL;
	bitem5->m_pRight=NULL;

	Item *bitem6=new Item;
	strcpy(bitem6->m_sItemName,"bitem 6");
	strcpy(bitem6->m_sDesc,"Battle Item 6");
	bitem6->m_dValue=6;
	bitem6->m_dWeight=6;
	bitem6->m_iType=BATTLE_ITEM;
	bitem6->m_pLeft=NULL;
	bitem6->m_pRight=NULL;

	Item *bitem7=new Item;
	strcpy(bitem7->m_sItemName,"bitem 7");
	strcpy(bitem7->m_sDesc,"Battle Item 7");
	bitem7->m_dValue=7;
	bitem7->m_dWeight=7;
	bitem7->m_iType=BATTLE_ITEM;
	bitem7->m_pLeft=NULL;
	bitem7->m_pRight=NULL;
	
	Item *tItem4=new Item;
	strcpy(tItem4->m_sItemName,"titem 4");
	strcpy(tItem4->m_sDesc,"Treasure Item 4");
	tItem4->m_dValue=4;
	tItem4->m_dWeight=4;
	tItem4->m_iType=TREASURE_ITEM;
	tItem4->m_pLeft=NULL;
	tItem4->m_pRight=NULL;
	
	Item *trItem = new Item;
/*
	//adding items to possessions
	cout<<"Testing addItem in Possessions."<<endl<<endl;
	bag->addItem(bItem4);
	bag->addItem(bitem2);
	bag->addItem(bitem6);
	bag->addItem(bitem1);
	bag->addItem(bitem3);
	bag->addItem(bitem5);
	bag->addItem(bitem7);

	bag->printTree();
	system("pause");

	//cout<<"I've tested dropItem in Possessions. Skipping because code breaks if I try to add back items I've dropped before"<<endl<<endl;

	cout<<"Dropping bItem 4"<<endl;
	bItem4=bag->dropItem("bitem 4");	
	bag->printTree();
	system("pause");

	cout<<"Dropping bItem 2"<<endl;
	bitem2=bag->dropItem("bitem 2");	
	bag->printTree();
	system("pause");

	cout<<"Dropping bItem 6"<<endl;
	bitem6=bag->dropItem("bitem 6");	
	bag->printTree();
	system("pause");

	cout<<"Dropping bItem 1"<<endl;
	bitem1=bag->dropItem("bitem 1");	
	bag->printTree();
	system("pause");

	cout<<"Dropping bItem 3"<<endl;
	bitem3=bag->dropItem("bitem 3");	
	bag->printTree();
	system("pause");

	cout<<"Dropping bItem 5"<<endl;
	bitem5=bag->dropItem("bitem 5");	
	bag->printTree();
	system("pause");

	cout<<"Dropping bItem 7"<<endl;
	bitem7=bag->dropItem("bitem 7");	
	bag->printTree();
	system("pause");

	cout<<"Adding items back"<<endl;
	bag->addItem(bItem4);
	bag->addItem(bitem2);
	bag->addItem(bitem6);
	bag->addItem(bitem1);
	bag->addItem(bitem3);
	bag->addItem(bitem5);
	bag->addItem(bitem7);

	bag->printTree();
	system("pause");

	//Testing getItem in Possessions
	cout<<"Testing getItem in Possessions."<<endl;

	tempItem=bag->getItem("bitem 1");
	cout<<"Got "<<tempItem->m_sItemName<<endl<<endl;

	tempItem=bag->getItem("bitem 2");
	cout<<"Got "<<tempItem->m_sItemName<<endl<<endl;

	tempItem=bag->getItem("bitem 3");
	cout<<"Got "<<tempItem->m_sItemName<<endl<<endl;

	tempItem=bag->getItem("bitem 4");
	cout<<"Got "<<tempItem->m_sItemName<<endl<<endl;

	tempItem=bag->getItem("bitem 5");
	cout<<"Got "<<tempItem->m_sItemName<<endl<<endl;

	tempItem=bag->getItem("bitem 6");
	cout<<"Got "<<tempItem->m_sItemName<<endl<<endl;

	tempItem=bag->getItem("bitem 7");
	cout<<"Got "<<tempItem->m_sItemName<<endl<<endl;
*/
	
	system("pause");
	cout<<"Testing addItem in Character."<<endl<<"Adding bitem 1-7 and titem 4."<<endl;
	
	c1.addItem(bItem4);
	c1.addItem(bitem2);
	c1.addItem(bitem6);
	c1.addItem(bitem1);
	c1.addItem(bitem3);
	c1.addItem(bitem5);
	c1.addItem(bitem7);

	c1.printAll();
	system("pause");
	
	c1.addItem(tItem4);
	c1.printAll();
	system("pause");




	//Testing getItem in Character
	cout<<"Testing getItem in Character."<<endl;
	
	tempItem=c1.getItem("bitem 4");
	cout<<tempItem->m_sItemName<<endl;

	tempItem=c1.getItem("sword");
	if (tempItem == NULL)
		cout<<"Could not find sword."<<endl;

	tempItem=c1.getItem("titem 4");
	cout<<tempItem->m_sItemName<<endl;

	system ("pause");

	cout<<"Testing dropItem in Character."<<endl;
	
	cout<<"Dropping bitem 4."<<endl;
	tempItem=c1.dropItem("bitem 4");
	cout<<tempItem->m_sItemName<<endl;

	cout<<"Dropping sword."<<endl;
	tempItem=c1.getItem("sword");
	if (tempItem == NULL)
		cout<<"Could not find sword."<<endl;
	
	c1.printAll();
	
	cout<<"Dropping titem 4."<<endl;
	tempItem=c1.dropItem("titem 4");
	cout<<tempItem->m_sItemName<<endl;

	c1.printAll();
	
	//The deconstructor tests destroyTree
	cout<<"Testing destroyTree."<<endl;
/*	
/*

	//Testing get function in Character	
	cout<<"Testing get functions in for Character 1"<<endl;
	strcpy(name,c1.getName());
	cout<<name<<"  ";
	k=c1.getClass();
	cout<<k<<"   ";
	k=c1.getAlignment();
	cout<<k<<"   ";
	k=c1.getHitPoints();
	cout<<k<<"   ";
	k=c1.getStrength();
	cout<<k<<"   ";
	k=c1.getDexterity();
	cout<<k<<"   ";
	k=c1.getConstitution();
	cout<<k<<"   ";
	k=c1.getIntelligence();
	cout<<k<<"   ";
	k=c1.getWisdom();
	cout<<k<<"   ";
	k=c1.getCharisma();
	cout<<k<<endl;
	
	system("pause");

	cout<<"Adding items 3 to 9."<<endl;
	c1.addItem(bitem3);
	c1.addItem(bitem4);
	c1.addItem(bitem5);
	c1.addItem(bitem6);
	c1.addItem(bitem7);
	c1.addItem(item8);
	c1.addItem(item9);
	
	c1.printAll();
	system("pause");

	
*/

	system("pause");

	
}