#include "component.h"
#include "gameObject.h"//PARA PODER REFERENCIAR GAMEOBJECT

Component::Component(void){
    this->n_name = "Component";
    this->is_enabled = true;
    this->m_gameObject = nullptr;
    this->Awake();
}

Component::Component(std::string l_name){
    this->n_name = l_name;
    this->is_enabled = true;
    this->m_gameObject = nullptr;
    this->Awake();
}

Component::~Component(void){}


void Component::Destroy(){}
void Component::Awake(){}
void Component::Start(){}
void Component::FixedUpdate(){}
void Component::Update(){}
void Component::LateUpdate(){}

