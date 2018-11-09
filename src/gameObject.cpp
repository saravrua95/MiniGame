#include "gameObject.h"

gameObject::gameObject(void){}

gameObject::gameObject(std::string l_name){}

gameObject::~gameObject(void){}


void gameObject::Create(){}
void gameObject::Destroy(){}



void gameObject::AddComponent(Component* l_component){}
Component* gameObject::findComponentByName(std::string l_name){}



void gameObject::addChild(gameObject* l_gameObject){}
gameObject* gameObject::findChildByName(std::string l_name){}
std::vector<gameObject*> gameObject::findAllChildrenByName(std::string l_name){}