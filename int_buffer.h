//
// Created by tinti on 2023-08-31.
//

#ifndef LABB1_INT_BUFFER_H
#define LABB1_INT_BUFFER_H

#include <cstdlib>

class int_buffer {
    int sz;


public:
    explicit int_buffer ( size_t size ) ; // size_t is defined in cstdlib
    int_buffer ( const int * source , size_t size ) ;
    int_buffer ( const int_buffer & rhs ) ; // copy construct
    int_buffer ( int_buffer && rhs ) ; // move construct
    int_buffer & operator =( const int_buffer & rhs ) ; // copy assign
    int_buffer & operator =( int_buffer && rhs ) ; // move assign
    int & operator []( size_t index ) ;
    const int & operator []( size_t index ) const ;
    size_t size () const ;
    int * begin () ;
    int * end () ;
    const int * begin () const ;
    const int * end () const ;
    ~ int_buffer () ;


};


#endif //LABB1_INT_BUFFER_H