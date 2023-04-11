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

    Array( void ) : _size( 0 ), _array( new T[0] ) {};

    Array( unsigned int n ) : _size( n ), _array( new T[n] ) {};

    Array( const Array &source ) : _size( source._size ), _array( NULL )
    {
      *this = source;
    };

    ~Array( void )
    {
      delete[] _array;
    };

    Array &operator=( const Array &rhs )
    {
      if (this != &rhs)
      {
        delete[] _array;
        
        _size = rhs._size;
        _array = new T[_size];
        
        for (unsigned int i = 0; i < _size; i++)
          _array[i] = rhs._array[i];
      }

      return (*this);
    }

    T &operator[]( unsigned int index )
    {
      if (index >= _size)
        throw indexOutOfBoundsException();
      
      return (_array[index]);
    }

    unsigned int size( void ) const
    {
      return (_size);
    };

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
