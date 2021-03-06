#include "IntCell.h"

IntCell::IntCell( int initialValue ) {
    storedValue = new int( initialValue );
 }

 IntCell::IntCell( const IntCell & rhs ) {
    storedValue = new int( *rhs.storedValue );
 }

 IntCell::~IntCell( ) {
    delete storedValue;
 }

 const IntCell & IntCell::operator=( const IntCell & rhs ) {
    if ( this != &rhs )
      *storedValue = *rhs.storedValue;
    return *this;
 }

 int IntCell::read( ) const {
    return *storedValue;
 }

 void IntCell::write( int x ) {
    *storedValue = x;
 }