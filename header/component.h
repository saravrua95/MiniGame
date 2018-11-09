#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>
#include <cstddef>

class gameObject;

class Component{
    public:
        std::string n_name;

        gameObject* m_gameObject;

        bool is_enabled;


        Component(void); //CONSTRUCTOR
        Component(std::string l_name);
        virtual ~Component(void); //DESTRUCTOR

        virtual void Destroy();
        virtual void Awake();
        virtual void Start();
        virtual void FixedUpdate();
        virtual void Update();
        virtual void LateUpdate();

};


#endif