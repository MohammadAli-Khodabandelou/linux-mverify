#ifndef SLUB_H
#define SLUB_H

void validate_fast_freelist(struct kmem_cache *s, void *object_to_verify);

#endif