#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
  private:

    unsigned int  _size;
    T            *_array;

  public:

    Array( void ) : _size( 0 ), _array( NULL ) {};
    Array( unsigned int n ) : _size( n ), _array( new T[n] ) {};
    Array( const Array &source ) : _array( NULL ) { operator=( source ); };
    ~Array( void ) { delete[] _array; };

    unsigned int size( void ) const { return (_size); };

    Array &operator=( const Array &rightHandSide )
    {
      if (this != &rightHandSide)
      {
        delete[] _array;
        
        _size = rightHandSide._size;
        _array = new T[_size];
        
        unsigned int i = 0;

        while (i < _size)
        {
          _array[i] = rightHandSide._array[i];
          i++;
        }
      }

      return (*this);
    }

    T &operator[]( unsigned int index )
    {
      if (index >= _size)
        throw indexOutOfBoundsException();
      
      return (_array[index]);
    }

    class indexOutOfBoundsException : public std::exception
		{
			public:

				virtual const char* what() const throw()
        {
          return ("Index out of bounds");
        }
		};

};

#endif
