#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <string>
#include <algorithm>
#include <typeinfo>
#include <vector>

#include "component.h"

class gameObject{
    public:
        std::string m_name;
        std::string m_tag;
        gameObject* m_parent;

        typedef std::vector<Component*> component_vector;
        typedef component_vector::iterator component_vector_itr;
        typedef component_vector::const_iterator component_vector_const_itr;

        typedef std::vector<gameObject*> game_object_vector;
        typedef game_object_vector::iterator game_object_vector_itr;
        typedef game_object_vector::const_iterator game_object_vector_const_itr;

        component_vector m_components;
        game_object_vector m_children;



        gameObject(void);
        gameObject(std::string l_name);
        ~gameObject(void);

        void Create();
        void Destroy();

        void AddComponent(Component* l_component);
        Component* findComponentByName(std::string l_name);

        template <typename T>
        T* findComponentByType(){
            for(component_vector_itr itr = m_components.begin(); itr != m_components.end; ++itr){
                if(T* l_type = dynamic_cast, <T*>(*itr)){
                    return l_type;
                }   
            }

            return NULL;
            
        }


        void addChild(gameObject* l_gameObject);

        gameObject* findChildByName(std::string l_name);
        std::vector<gameObject*> findAllChildrenByName(std::string l_name);


};



#endif