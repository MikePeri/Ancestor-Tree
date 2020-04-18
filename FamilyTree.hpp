#pragma once

#include <iostream>
#include <string>
#include <stdbool.h>
using namespace std;

namespace family{
    class Tree{ 
	    struct node {
            bool male;
		    string name;
		    node* father;
		    node* mother;
	    };

      
	    public:
           node* root;
        //Constructors:
        Tree(string name,bool male)
            {
                root= new node;
                root->name=name;
                root->father=NULL;
                root->mother=NULL;
                root->male=male;
            }//Tree
        Tree(string name)
            {
                root= new node;
                root->name=name;
                root->father=NULL;
                root->mother=NULL;
                root->male=false;
            }//Tree
        
        // ~Tree()
        // {   
        //     free root->father;
        //     free root->mother;
        // }//Distruction
       
        //Class Functionality
        //--------------------------------------------------------
        //Adding parents
        Tree addFather(string child,string father);
        Tree addMother(string child,string mother);
        //Helping functions
        struct node* findPerson(string child,node* root);
         //--------------------------------------------------------
        //Finding relation by name
        string relation(string name);
        //Helping functions
        int findDeaph(node* root,string name,int level);
        //--------------------------------------------------------
        //Finding name by relation
        string find(string relation);
        //Helping functions
        /**
         * By giving relation output the level of the person in the ancestor tree
         */
        int levelOfRelation(string relation);
        /**
         * By giving the relation check whether is it male or female
         */
        bool ifMale(string relation);
        /**
         * Search person by gender and level relation
         */
        struct node* findPersonByRelation(node* root,bool male,int level);
        //--------------------------------------------------------
        //Displaying all the Family
        void display();
        //Helping functions
        int height(node* node);
        void printGivenLevel(node* root, int level) ;
        void printLevelOrder(node* root) ;
        //--------------------------------------------------------
        //removing all the Tree from some person
        void remove(string name);
        //Helping functions
        void removeTree(node* root);
        struct node* findChild(string name,node* root);
        //--------------------------------------------------------
    };//Tree
};//family


