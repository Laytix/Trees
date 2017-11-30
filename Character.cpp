/*******************************************************************
*   Character.cpp
*   Layiwola Olwatobi
*   Programming Assignment 1: Dungeons And Dragons
*   
*   This program is entirely my own work
*******************************************************************/
#include "Character.h"
#include "Item.h"
#include <iostream>
#include <string>


using namespace std;

Character :: Character(){
	int i;
	strcpy(m_sName, "");
	m_iClass = 0;
	m_iAlignment = 0;
	m_iHitPoints = 0;
	m_iCharTraits[0] = 0;
	m_iCharTraits[1] = 0;
	m_iCharTraits[2] = 0;
	m_iCharTraits[3] = 0;
	m_iCharTraits[4] = 0;
	m_iCharTraits[5] = 0;

	
	
	
	m_pBattleItems = new Possessions;
	m_pTreasureItems = new Possessions;
	m_pNext = NULL;
}

Character :: ~Character(){}

Character :: Character(char *name, int cl, int al, int hp, int str,int dex, int con, int itl, int wis, int chr)
{
	int i;
	strcpy(m_sName,name);
	m_iClass = cl;
	m_iAlignment = al;
	m_iHitPoints = hp;
	m_iCharTraits[0] = str;
	m_iCharTraits[1] = dex;
	m_iCharTraits[2] = con;
	m_iCharTraits[3] = itl;
	m_iCharTraits[4] = wis;
	m_iCharTraits[5] = chr;

	m_pBattleItems = new Possessions;
	m_pTreasureItems = new Possessions;

	

	
	m_pNext = NULL;
}


bool Character::addItem(Item *item)

{
	cout << "reached" << endl;
	if(item->m_iType == BATTLE_ITEM){

		return m_pBattleItems->addItem(item);
	}else if( item->m_iType == TREASURE_ITEM)
	{
		return m_pTreasureItems->addItem(item);
	}
	else
	{
		return false;
	}
	
	
}
 

Item *Character::getItem(char *itemName)
{
	Item *temp;
	temp = m_pBattleItems->getItem(itemName);

	if (temp == NULL)
	{
		temp = m_pTreasureItems->getItem(itemName);
		
	
	}
	return temp;
}


Item *Character::dropItem(char *itemName)
{
    
	Item *temp;
	temp = m_pBattleItems->dropItem(itemName);

	if (temp == NULL)
	{
		temp = m_pTreasureItems->dropItem(itemName);
		
	
	}
	return temp;
    
    
    
}

char *Character :: getName()
	{
		
		
		return m_sName;
		//cout << "testing the getName: " << name << endl;
		
	}

void Character :: setName(char *name){

	strcpy(m_sName, name);

}

int Character ::getClass(){

	return m_iClass;
   //cout << "testing the getClass: " << cl << endl;

 }

 void Character :: setClass(int cl){

	 m_iClass = cl;

 }

int Character ::getAlignment(){

	 return m_iAlignment;
	 //cout << "testing the getAlignment: " << al << endl;



 }

 void Character :: setAlignment(int al){

	 m_iAlignment = al;

 }

 
 int Character ::getHitPoints(){

	 return m_iHitPoints;
	 //cout << "testing the getHitPoints: " << hp << endl;

 }

 void Character :: setHitPoints(int hp){

	 m_iHitPoints = hp;

 }

int Character:: getStrength(){

	 return m_iCharTraits[0];
	 //cout << "testing the getStrength:  " << *str << endl;

 }

 void Character::setStrength( int str){
	 
	
	 m_iCharTraits[0] = str;
 }

int Character:: getDexterity(){
	 
	 return m_iCharTraits[1];
	 //cout << "testing the getDexterity:  " << *dex << endl;

 }

 void Character:: setDexterity(int dex){

	
	m_iCharTraits[1] = dex;
 }

int Character:: getConstitution(){
	
	 return m_iCharTraits[2];
	 //cout << "testing the getConstitution:  " << *cn << endl;

 }

 void Character:: setConstitution(int con){
	 
	 m_iCharTraits[2] = con;
 }

int Character:: getIntelligence(){
	
	 return m_iCharTraits[3];
	 //cout << "testing the getIntelligence:  " << *itl << endl;
	 

 }

 void Character:: setIntelligence(int itl){
	 
	 m_iCharTraits[3] = itl;
 }

int Character:: getWisdom(){
	 
	return m_iCharTraits[4];
	 //cout << "testing the getWisdom:  " << *wis << endl;
	 
		

 }

 void Character:: setWisdom(int wis){
	 
	 
	 m_iCharTraits[4] = wis;
 }

 int Character:: getCharisma(){
	
	 return m_iCharTraits[5];
	 //cout << "testing the getCharisma:  " << *chr << endl;
	 

 }

 void Character:: setCharisma(int chr){
	 
	 m_iCharTraits[5] = chr;

 }

 void Character :: printAll(){
	 int i;

	 cout <<"Character's Name: " << m_sName << endl;
	 cout <<"Character's Class: " << m_iClass << endl;
	 cout <<"Character's Alignment: "<< m_iAlignment << endl;
	 cout <<"Character's HitPoint: " << m_iHitPoints << endl;
	 cout <<"Character's Strength: " << m_iCharTraits[0] << endl;
	 cout <<"Character's Dexterity: "<< m_iCharTraits[1] << endl;
	 cout <<"Character's Constitution: " << m_iCharTraits[2] << endl;
	 cout <<"Character's Intelligence: " << m_iCharTraits[3] << endl;
	 cout <<"Character's Wisdom: " << m_iCharTraits[4] << endl;
	 cout <<"Character's Charisma: " << m_iCharTraits[5] << endl;
	 
	 
	 
	 
	 
 }


