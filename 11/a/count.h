
template<class It, class F>
  typename It::difference_type count_if(It first, It last, const F& predicate)
{
  typename It::difference_type count{0};
  while( first != last )
    {
      if( predicate( *first ) )
	{
	  ++count;
	}
      ++first;
    }

  return count;
}

template<class It, class T>
  typename It::difference_type count(It first, It last, const T& value)
{
  typename It::difference_type result{0};
  while( first != last )
    {
      if ( *first == value )
	{
	  ++result;
	}
      ++first;
    }
  return result;
}
