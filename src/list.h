#ifndef _LIST_H
#define _LIST_H

#include "list_t.h"
#include "func_t.h"

#include <stdbool.h>

/*** Basic Functions ***/
list *appendLists(list *xs, list *ys);
node *head(list *xs);
node *last(list *xs);
list *tail(list *xs);
list *init(list *xs);
bool null(list *xs);
unsigned int length(list *xs);
/***********************/


/*** List Transformations ***/
list *map(u_func_t f, list *xs);
list *reverse(list *xs);
list *intersperse(void *a, list *xs);
list *intercalate(list *xs, list *xss);
list *transpose(list *xss);
/****************************/


/*** Reducing Lists (Folds) ***/
void *foldl(b_func_t f, void *a, list *xs);
void *foldr(b_func_t f, void *a, list *xs);

/** Special Folds **/
list *concat(list *xss);
/*******************/
/******************************/


/*** Sublists ***/
/** Extracting Sublists **/
list *take(unsigned int a, list *xs);
list *drop(unsigned int a, list *xs);
/*************************/

/** Predicates **/
bool *isPrefixOf(list *prefix, list *xs);
/****************/
/****************/

#endif
