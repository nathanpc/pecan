/**
 * blob.h
 * Abstract representation of a binary file in memory.
 *
 * @author Nathan Campos <nathan@innoveworkshop.com>
 */

#ifndef _BLOB_H
#define _BLOB_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdlib.h>

// Blob type definition.
typedef struct {
	size_t len;
	void *data;
} pecan_blob_t;

// Initialization
void blob_init(pecan_blob_t *blob);

// Reading
size_t blob_slurp(pecan_blob_t *blob, const char *fpath);

// Cleanup
void blob_free(pecan_blob_t *blob);

#ifdef __cplusplus
}
#endif

#endif /* _BLOB_H */
