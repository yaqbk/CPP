#ifndef AGHTREE_H
#define AGHTREE_H

template<class T>
class aghTree : public aghContainer<T>
{
    private:

        aghTreeNode<T>* wskRoot;
        unsigned int iRozmiar;

        aghTreeNode<T>* getNode(int) const;
        aghTreeNode<T>* getRoot() const;
        aghTreeNode<T>* getNajmniejszy(aghTreeNode<T>*) const;
        int getLength(aghTreeNode<T>* node) const;


        void setRoot(aghTreeNode<T>* wskRoot);
        void setRozmiar(unsigned int iRozmiar);

        

    public:

        aghTree();
        aghTree(aghContainer<T> & kopia);
        ~aghTree();



//--------------------------------------------------------------------------

        /**
       * @brief Metoda virtualna kt�ra "wklada" element do pojemnika
       * @param index - index
       * @param element - wrzucany element
       * @return Wartosc logiczna
       */
        bool insert(int index, T const & element);

       /**
       * @brief Metoda virtualna kt�ra pobiera element z pojemnika
       * @param index - index
       * @return Pobrany element
       */
      	T& at(int) const;

       /**
       * @brief Metoda virtualna kt�ra zwraca ilosc elementow
       * @return Liczba elementow
       */
       int size(void) const;

       /**
       * @brief Metoda virtualna kt�ra usuwa element
       * @param index - index
       * @return Wartosc logiczna
       */
       bool remove(int index);

       aghTree<T> const & operator=(aghTree<T> const &);

};

#endif // AGHTREE_H
