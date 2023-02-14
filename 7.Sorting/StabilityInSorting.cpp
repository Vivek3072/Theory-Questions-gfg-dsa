#include<iostream>
#include<algorithm>
using namespace std;

//Que given array --> arr[] = {{"Banil",50},{"Ayan",80},{"Piyush",50},{"Ramesh",80}}
//Stable sorted array --> arr[] = {{"Banil",50},{"Piyush",50},{"Ayan",80},{"Ramesh",80}}
//Unstable sorted array --> arr[] = {{"Piyush",50},{"Banil",50},{"Ayan",80},{"Ramesh",80}}
// Stability is useful when we have objets with mltiple fields , not in case of arrays.
//  STABLE ALGORITHMS - Bubble sort , insertion sort , merge sort
//  UNSTABLE ALGORITHMS - Selection sort , quick sort , heap sort