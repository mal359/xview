#if !defined(OUTPUT__H)
#define OUTPUT__H

#include <xview/pkg.h>
#include <xview_private/io_stream.h>

int stream_putc(char c, STREAM *out);
void stream_puts(char *s, STREAM *out);
void stream_fputs(char *s, STREAM *out);
void stream_flush(STREAM *out);

#endif

