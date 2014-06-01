#ifndef AGHVECTOR_H
#define AGHVECTOR_H

#include "aghContainer.h"


template<class T>
class aghVector : public aghContainer<T>
{

    private:

        T *vector;
        unsigned int iRozmiar;
        unsigned int iMaxRozmiar;
        void resize(unsigned int iRozmiar);

    public:

        aghVector();

      	aghVector(aghVector<T> const & other); // ???

      	aghVector(aghContainer<T> const & other); // ???

      	~aghVector();

//------------------------------------------------------------------------

        bool insert(int, T const&);  //wstawianie elementu do pojemnika

        T& at(int) const;  //Metoda zwracaj�ca warto�� elementu

        int size(void) const;  // Metoda zwracaj�ca ilo�� element�w

        bool remove(int);   //Metoda usuwaj�ca wybrany element

//------------------------------------------------------------------------
        aghVector<T> const & operator=(aghVector const &);


};



//------------------------------------------------------------------------
//------------------------------------------------------------------------


#endif
