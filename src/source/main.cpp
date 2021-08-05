//#include<cstddef>
//
//struct __input_iterator_tag {};
//struct __output_iterator_tag {};
//struct __forward_iterator_tag : public __input_iterator_tag{};
//struct __bidirectional_iterator_tag : public __forward_iterator_tag {};
//struct __random_access_iterator_tag : public __bidirectional_iterator_tag {};
//
//template<class I>
//struct __iterator_traits {
//	typedef typename I::iterator_category  iterator_category;    //迭代器类型 input_iterator,output_iterator,forward_iterator,bidirectional_iterator,random_access_iterator 
//	typedef typename I::value_type         value_type;           //迭代器所指对象的类别
//	typedef typename I::difference_type    difference_type;      //两个迭代器之间的距离
//	typedef typename I::pointer            pointer;              //pointer type
//	typedef typename I::reference          reference;            //reference type
//};
//
//template<class I>
//struct __iterator_traits<I*> {
//	typedef __random_access_iterator_tag iterator_category;
//	typedef I                            value_type;
//	typedef ptrdiff_t                    difference_type;
//	typedef I*                           pointer;
//	typedef I&                           reference;
//};
//
//template<class I, class T>
//typename __iterator_traits<I>::difference_type
//Count(I first, I last, const T& value)
//{
//	typename __iterator_traits<I>::difference_type n = 0;
//	for (; first != last; ++first)
//		if (*first == value)
//			++n;
//	return n;
//}
//
//template<class InputIterator>
//inline typename __iterator_traits<InputIterator>::difference_type
//__distance(InputIterator first, InputIterator last, __input_iterator_tag)
//{
//	typename __iterator_traits<InputIterator>::difference_type n = 0;
//	while (first != last)
//	{
//		first++; 
//		n++;
//	}
//	return n;
//}
//
//template<class InputIterator>
//inline typename __iterator_traits<InputIterator>::difference_type
//__distance(InputIterator first, InputIterator last, __random_access_iterator_tag)
//{
//	return last - first;
//}
//
//template<class InputIterator>
//inline typename __iterator_traits<InputIterator>::difference_type
//distance(InputIterator first, InputIterator last)
//{
//	typedef typename __iterator_traits<InputIterator>::iterator_category category;
//	return __distance(first, last, category());
//}
//
//#include<iostream>
//using std::cout;
//using std::cin;
//using std::endl;
//
//int main()
//{
//	int ia[6] = { 0,1,2,3,4,2 };
//	cout << Count(ia, ia + 6, 2) << endl;
//	cout << distance(ia, ia + 6) << endl;
//	cin.get();
//
//	return 0;
//}

#include<iostream>
#include"stl_iterator.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int ia[6] = { 0,1,2,3,4,2 };
	//cout << Count(ia, ia + 6, 2) << endl;
	cout << stl::distance(ia, ia + 6) << endl;
	cin.get();

	return 0;
}