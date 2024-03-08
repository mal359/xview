/*	@(#)hashfn.h 20.10 93/06/28 SMI	*/

/*
 *    hashfn.h -- external declarations
 */

/*
 *	(c) Copyright 1989 Sun Microsystems, Inc. Sun design patents 
 *	pending in the U.S. and foreign countries. See LEGAL NOTICE 
 *	file for terms of the license.
 */

#ifndef hashfn_h
#define hashfn_h

#include <sys/types.h>

typedef struct he_ HashEntry;

struct he_ {
    HashEntry    *he_next;
    HashEntry    *he_prev;
    caddr_t        he_key;
    caddr_t        he_payload;
};

typedef struct ht_ HashTable;

struct ht_ {
    int            ht_size;
    
    /* hash func: int f(caddr_t) */
    int            (*ht_hash_fn)(caddr_t);

    /* compare func: int f(caddr_t, caddr_t) returns 0 for equal */
    int            (*ht_cmp_fn)(caddr_t, caddr_t);
    HashEntry    **ht_table;
};

#endif /* hashfn_h */
