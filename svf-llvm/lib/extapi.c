#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#include <uchar.h>
#define NULL ((void *)0)

/*
    Functions with __attribute__((annotate("XXX"))) will be handle by SVF specifcially.
    Their logical behaviours can't be described by C/C++ language. For example, "malloc()" functionality is to alloc an object to it's return value.

    The description of methodProperties is as follows:

        ALLOC_HEAP_RET,    // returns a pointer to a newly allocated heap object
        ALLOC_HEAP_ARGi    // stores a pointer to an allocated object in *argi
        ALLOC_STACK_RET,   // returns a pointer to a newly allocated stack object
        REALLOC_HEAP_RET,  
        MEMSET,            // memcpy() operations
        MEMCPY,            // memset() operations
        OVERWRITE,         // svf function overwrite app function
*/
__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:Arg0")))
void *malloc(unsigned long size)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
void *fopen(const char *voidname, const char *mode)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
void *fopen64(const char *voidname, const char *mode)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
void *fdopen(int fd, const char *mode)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
struct dirent64 *readdir64(void *dirp)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
void *tmpvoid64(void)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:Arg0*Arg1")))
void *calloc(unsigned long nitems, unsigned long size)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:Arg0")))
void *zmalloc(unsigned long size)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
void *gzdopen(int fd, const char *mode)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
void *iconv_open(const char *tocode, const char *fromcode)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:Arg0")))
void *lalloc(unsigned long size, int a)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:Arg0")))
void *lalloc_clear(unsigned long size, int a)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
long *nhalloc(unsigned int a, const char *b, int c)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:Arg0")))
void *oballoc(unsigned long size)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
void *popen(const char *command, const char *type)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
void *pthread_getspecific(const char *a, const char *b)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
struct dirent *readdir(void *dirp)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:Arg0*Arg1")))
void* safe_calloc(unsigned nelem, unsigned elsize)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:Arg0")))
void* safe_malloc(unsigned long size)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:Arg0*Arg1")))
char* safecalloc(int a, int b)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:Arg0")))
char* safemalloc(int a, int b)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
void *setmntent(const char *voidname, const char *type)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
void *shmat(int shmid, const void *shmaddr, int shmflg)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
void* __sysv_signal(int a, void *b)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
void (*signal(int sig, void (*func)(int)))(int)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
char *tempnam(const char *dir, const char *pfx)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
void *tmpvoid(void)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
void* xcalloc(unsigned long size1, unsigned long size2)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:Arg0")))
void* xmalloc(unsigned long size)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:Arg0")))
void *_Znam(unsigned long size)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:Arg0")))
void *_Znaj(unsigned long size)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:Arg0")))
void *_Znwj(unsigned long size)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:Arg0")))
void *__cxa_allocate_exception(unsigned long size)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:Arg1")))
void* aligned_alloc(unsigned long size1, unsigned long size2)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:Arg1")))
void* memalign(unsigned long size1, unsigned long size2)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:Arg0")))
void *valloc(unsigned long size)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:Arg1")))
void *mmap64(void *addr, unsigned long len, int prot, int flags, int fildes, long off)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
char *XSetLocaleModifiers(char *a)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
char * __strdup(const char * string)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
char *crypt(const char *key, const char *salt)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
char *ctime(const void *timer)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
char *dlerror(void)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
void *dlopen(const char *voidname, int flags)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
const char *gai_strerror(int errcode)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
const char *gcry_cipher_algo_name(int errcode)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
const char *svfgcry_md_algo_name_(int errcode)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
char *getenv(const char *name)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
char *getlogin(void)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
char *getpass(const char *prompt)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
const char * gnutls_strerror(int error)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
const char *gpg_strerror(unsigned int a)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
const char * gzerror(void* file, int * errnum)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
char *inet_ntoa(unsigned int in)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
void *initscr(void)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
void* llvm_stacksave()
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:Arg1")))
void *mmap(void *addr, unsigned long len, int prot, int flags, int fildes, long off)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
void *newwin(int nlines, int ncols, int begin_y, int begin_x)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
char *nl_langinfo(int item)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
void *opendir(const char *name)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
void *sbrk(long increment)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
char *strdup(const char *s)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
char *strerror(int errnum)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
char *strsignal(int errnum)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
char *textdomain(const char * domainname)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
char *tgetstr(char *id, char **area)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
char *tigetstr(char *capname)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
char *tmpnam(char *s)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
char *ttyname(int fd)
{
    return NULL;
}

__attribute__((annotate("REALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
char *getcwd(char *buf, unsigned long size)
{
    return NULL;
}

__attribute__((annotate("REALLOC_HEAP_RET"), annotate("AllocSize:Arg1")))
char *mem_realloc(void *ptr, unsigned long size)
{
    return NULL;
}

__attribute__((annotate("REALLOC_HEAP_RET"), annotate("AllocSize:Arg1")))
char *realloc(void *ptr, unsigned long size)
{
    return NULL;
}

__attribute__((annotate("REALLOC_HEAP_RET"), annotate("AllocSize:Arg1")))
void* safe_realloc(void *p, unsigned long n)
{
    return NULL;
}

__attribute__((annotate("REALLOC_HEAP_RET"), annotate("AllocSize:Arg1*Arg2")))
void* saferealloc(void *p, unsigned long n1, unsigned long n2)
{
    return NULL;
}

__attribute__((annotate("REALLOC_HEAP_RET"), annotate("AllocSize:UNKNOWN")))
void* safexrealloc()
{
    return NULL;
}


char *strtok(char *str, const char *delim)
{
    return str;
}

char *strtok_r(char *str, const char *delim, char **saveptr)
{
    return str;
}

char* strsep(char** stringp, const char* delim)
{
    return *stringp;
}

__attribute__((annotate("REALLOC_HEAP_RET"), annotate("AllocSize:Arg1")))
void *xrealloc(void *ptr, unsigned long bytes)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:Arg0")))
void *_Znwm(unsigned long size)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:Arg0")))
void *_ZnwmRKSt9nothrow_t(unsigned long size, void *)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:Arg0")))
void *_ZnamRKSt9nothrow_t(unsigned long size, void *)
{
    return NULL;
}

__attribute__((annotate("ALLOC_HEAP_ARG0"), annotate("AllocSize:UNKNOWN")))
int asprintf(char **restrict strp, const char *restrict fmt, ...)
{
    return 0;
}

__attribute__((annotate("ALLOC_HEAP_ARG0"), annotate("AllocSize:UNKNOWN")))
int vasprintf(char **strp, const char *fmt, void* ap)
{
    return 0;
}

__attribute__((annotate("ALLOC_HEAP_ARG0"), annotate("AllocSize:UNKNOWN")))
int db_create(void **dbp, void *dbenv, unsigned int flags)
{
    return 0;
}

__attribute__((annotate("ALLOC_HEAP_ARG0"), annotate("AllocSize:UNKNOWN")))
int gnutls_pkcs12_bag_init(void *a)
{
    return 0;
}

__attribute__((annotate("ALLOC_HEAP_ARG0"), annotate("AllocSize:UNKNOWN")))
int gnutls_pkcs12_init(void *a)
{
    return 0;
}

__attribute__((annotate("ALLOC_HEAP_ARG0"), annotate("AllocSize:UNKNOWN")))
int gnutls_x509_crt_init(void *a)
{
    return 0;
}

__attribute__((annotate("ALLOC_HEAP_ARG0"), annotate("AllocSize:UNKNOWN")))
int gnutls_x509_privkey_init(void *a)
{
    return 0;
}

__attribute__((annotate("ALLOC_HEAP_ARG0"), annotate("AllocSize:Arg2")))
int posix_memalign(void **a, unsigned long b, unsigned long c)
{
    return 0;
}

__attribute__((annotate("ALLOC_HEAP_ARG1"), annotate("AllocSize:UNKNOWN")))
int scandir(const char *restrict dirp, struct dirent ***restrict namelist, int (*filter)(const struct dirent *), int (*compar)(const struct dirent **, const struct dirent **))
{
    return 0;
}

__attribute__((annotate("ALLOC_HEAP_ARG2"), annotate("AllocSize:UNKNOWN")))
int XmbTextPropertyToTextList(void *a, void *b, char ***c, int *d)
{
    return 0;
}

__attribute__((annotate("MEMCPY")))
void llvm_memcpy_p0i8_p0i8_i64(char* dst, char* src, int sz, int flag){}

__attribute__((annotate("MEMCPY")))
void llvm_memcpy_p0_p0_i64(char* dst, char* src, int sz, int flag){}

__attribute__((annotate("MEMCPY")))
void llvm_memcpy_p0i8_p0i8_i32(char* dst, char* src, int sz, int flag){}

__attribute__((annotate("MEMCPY")))
void llvm_memcpy_p0_p0_i32(char* dst, char* src, int sz, int flag){}

__attribute__((annotate("MEMCPY")))
void llvm_memcpy(char* dst, char* src, int sz, int flag){}

__attribute__((annotate("MEMCPY")))
void llvm_memmove(char* dst, char* src, int sz, int flag){}

__attribute__((annotate("MEMCPY")))
void llvm_memmove_p0i8_p0i8_i64(char* dst, char* src, int sz, int flag){}

__attribute__((annotate("MEMCPY")))
void llvm_memmove_p0_p0_i64(char* dst, char* src, int sz, int flag){}

__attribute__((annotate("MEMCPY")))
void llvm_memmove_p0i8_p0i8_i32(char* dst, char* src, int sz, int flag){}

__attribute__((annotate("MEMCPY")))
void llvm_memmove_p0_p0_i32(char* dst, char* src, int sz, int flag){}

__attribute__((annotate("MEMCPY")))
void __memcpy_chk(char* dst, char* src, int sz, int flag){}

__attribute__((annotate("MEMCPY")))
void *memmove(void *str1, const void *str2, unsigned long n)
{
    return NULL;
}

__attribute__((annotate("MEMCPY")))
void bcopy(const void *s1, void *s2, unsigned long n){}

__attribute__((annotate("MEMCPY")))
void *memccpy( void * restrict dest, const void * restrict src, int c, unsigned long count)
{
    return NULL;
}

__attribute__((annotate("MEMCPY")))
void __memmove_chk(char* dst, char* src, int sz){}

__attribute__((annotate("MEMSET")))
void llvm_memset(char* dst, char elem, int sz, int flag){}

__attribute__((annotate("MEMSET")))
void llvm_memset_p0i8_i32(char* dst, char elem, int sz, int flag){}

__attribute__((annotate("MEMSET")))
void llvm_memset_p0_i32(char* dst, char elem, int sz, int flag){}

__attribute__((annotate("MEMSET")))
void llvm_memset_p0i8_i64(char* dst, char elem, int sz, int flag){}

__attribute__((annotate("MEMSET")))
void llvm_memset_p0_i64(char* dst, char elem, int sz, int flag){}

__attribute__((annotate("MEMSET")))
char *__memset_chk(char * dest, int c, unsigned long destlen, int flag)
{
    return NULL;
}

__attribute__((annotate("MEMSET")))
char *wmemset(wchar_t * dst, wchar_t elem, int sz, int flag) {
    return NULL;
}


__attribute__((annotate("STRCPY")))
char * __strcpy_chk(char * dest, const char * src, unsigned long destlen)
{
    return NULL;
}

__attribute__((annotate("STRCAT")))
char *__strcat_chk(char * dest, const char * src, unsigned long destlen)
{
    return NULL;
}

__attribute__((annotate("STRCAT")))
wchar_t* __wcscat_chk(wchar_t * dest, const wchar_t * src)
{
    return NULL;
}

__attribute__((annotate("STRCPY")))
char *stpcpy(char *restrict dst, const char *restrict src)
{
    return NULL;
}

__attribute__((annotate("STRCAT")))
char *strcat(char *dest, const char *src)
{
    return NULL;
}

__attribute__((annotate("STRCAT")))
char *wcscat(char *dest, const char *src)
{
    return NULL;
}


__attribute__((annotate("STRCPY")))
char *strcpy(char *dest, const char *src)
{
    return NULL;
}

__attribute__((annotate("STRCAT")))
char *strncat(char *dest, const char *src, unsigned long n)
{
    return NULL;
}

__attribute__((annotate("STRCAT")))
wchar_t* wcsncat(wchar_t * dest, const wchar_t * src, int n) {
    return NULL;
}

__attribute__((annotate("STRCAT")))
char *__strncat_chk(char *dest, const char *src, unsigned long n)
{
    return NULL;
}

__attribute__((annotate("STRCAT")))
wchar_t* __wcsncat_chk(wchar_t * dest, const wchar_t * src, int n) {
    return NULL;
}

__attribute__((annotate("MEMCPY")))
char *strncpy(char *dest, const char *src, unsigned long n)
{
    return NULL;
}

__attribute__((annotate("STRCPY")))
char *wcscpy(wchar_t* dest, const wchar_t* src) {
    return NULL;
}

__attribute__((annotate("MEMCPY")))
unsigned long iconv(void* cd, char **restrict inbuf, unsigned long *restrict inbytesleft, char **restrict outbuf, unsigned long *restrict outbytesleft)
{
    return 0;
}

__attribute__((annotate("OVERWRITE")))
void* _ZNSt5arrayIPK1ALm2EE4backEv(void *arg)
{
    void* ptr1 = (char*)arg + 0;
    void* ptr2 = (char*)ptr1 + 0;
    return ptr2;
}

__attribute__((annotate("ALLOC_HEAP_RET"), annotate("AllocSize:Arg0")))
void *SyGetmem(unsigned long size)
{
    return NULL;
}

void * __rawmemchr(const void * s, int c)
{
    return (void *)s;
}

struct jpeg_error_mgr *jpeg_std_error(struct jpeg_error_mgr * a)
{
    return a;
}

char *fgets(char *str, int n, void *stream)
{
    return str;
}

char *fgets_unlocked(char *str, int n, void *stream)
{
    return str;
}

char* gets(char *str)
{
    return str;
}

void *memchr(const void *str, int c, unsigned long n)
{
    return (void *)str;
}

void *memrchr(const void *str, int c, unsigned long n)
{
    return (void *)str;
}

void * mremap(void * old_address, unsigned long old_size, unsigned long new_size, int flags)
{
    return old_address;
}

char *strchr(const char *str, int c)
{
    return (char *)str;
}

char *__strchrnull(const char *s, int c)
{
    return (char *)s;
}

char *strcasestr(const char *haystack, const char *needle)
{
    return (char *)haystack;
}

char* index(const char *s, int c)
{
    return (char *)s;
}

char* rindex(const char *s, int c)
{
    return (char *)s;
}

char *strerror_r(int errnum, char *buf, unsigned long buflen)
{
    return buf;
}

char *strpbrk(const char *str1, const char *str2)
{
    return (char *)str1;
}

char *strptime(const void* s, const void* format, void* tm)
{
    return (char *)s;
}

char *strrchr(const char *str, int c)
{
    return (char *)str;
}

char *strstr(const char *haystack, const char *needle)
{
    return (char *)haystack;
}

char *tmpnam_r(char *s)
{
    return s;
}

int isalnum(int character)
{
    return character;
}

int isalpha(int character)
{
    return character;
}

int isblank(int character)
{
    return character;
}

int iscntrl(int c)
{
    return c;
}

int isdigit(int c)
{
    return c;
}

int isgraph(int c)
{
    return c;
}

int islower( int arg )
{
    return arg;
}

int isprint(int c)
{
    return c;
}

int ispunct(int argument)
{
    return argument;
}

int isspace(char c)
{
    return c;
}

int isupper(int c)
{
    return c;
}

int isxdigit(int c)
{
    return c;
}

char *asctime_r(const void *tm, char *buf)
{
    return buf;
}

void *bsearch(const void *key, const void *base, unsigned long nitems, unsigned long size, int (*compar)(const void *, const void *))
{
    return (void *)base;
}

struct mntent *getmntent_r(void *fp, struct mntent *mntbuf, char *buf, int buflen)
{
    return mntbuf;
}

struct tm *gmtime_r(const void *timer, struct tm *buf)
{
    return buf;
}

char * gzgets(void* file, char * buf, int len)
{
    return buf;
}

struct tm *localtime_r(const void *timep, struct tm *result)
{
    return result;
}

char *realpath(const char *restrict path, char *restrict resolved_path)
{
    return resolved_path;
}

void* freopen64( const char* voidname, const char* mode, void* fp )
{
    return fp;
}

void* freopen(const char* voidname, const char* mode, void* fp)
{
    return fp;
}

const char *inet_ntop(int af, const void *restrict src,  char *restrict dst, unsigned int size)
{
    return dst;
}

double strtod(const char *str, char **endptr)
{
    *endptr = (char *)str;
    return 0.0;
}

double strtod_l(const char *str, char **endptr, void *loc)
{
    *endptr = (char *)str;
    return 0.0;
}

float strtof(const char *nptr, char **endptr)
{
    *endptr = (char *)nptr;
    return 0.0;
}

float strtof_l(const char *nptr, char **endptr, void *loc)
{
    *endptr = (char *)nptr;
    return 0.0;
}

long int strtol(const char *str, char **endptr, int base)
{
    *endptr = (char *)str;
    return 0;
}

long long strtoll(const char *str, char **endptr, int base)
{
    *endptr = (char *)str;
    return 0;
}

long double strtold(const char* str, char** endptr)
{
    *endptr = (char *)str;
    return 0.0;
}

unsigned long int strtoul(const char *str, char **endptr, int base)
{
    *endptr = (char *)str;
    return 0;
}

unsigned long long strtoull(const char *str, char **endptr, int base)
{
    *endptr = (char *)str;
    return 0;
}

char *gcvt(double x, int ndigit, char *buf)
{
    return buf;
}

void *memmem(const void *haystack, unsigned long haystacklen, const void *needle, unsigned long needlelen)
{
    return (void *)haystack;
}

char* ctime_r(const char *timer, char *buf)
{
    return buf;
}

int readdir_r(void *__restrict__dir, void *__restrict__entry, void **__restrict__result)
{
    __restrict__entry = *__restrict__result;   
    return 0;
}

int getpwnam_r(const char *name, void *pwd, char *buf, unsigned long buflen, void **result)
{
    *result = pwd;
    return 0;
}

int getpwuid_r(unsigned int uid, void *pwd, char *buf, unsigned long buflen, void **result)
{
    *result = pwd;
    return 0;
}

void _ZNSt8__detail15_List_node_base7_M_hookEPS0_(void *arg0, void **arg1)
{
    *arg1 = arg0;
}

void* __dynamic_cast(void* source, const void* sourceTypeInfo, const void* targetTypeInfo, unsigned long castType)
{
    return source;
}

void _ZNSsC1EPKcRKSaIcE(void **arg0, void *arg1)
{
    *arg0 = arg1;
}

void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_(void **arg0, void *arg1)
{
    *arg0 = arg1;
}

__attribute__((annotate("ALLOC_STACK_RET")))
const unsigned short **__ctype_b_loc(void)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
int **__ctype_tolower_loc(void)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
int **__ctype_toupper_loc(void)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
int *__errno_location(void)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
int * __h_errno_location(void)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
void* __res_state(void)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
char *asctime(const void *timeptr)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
char * bindtextdomain(const char * domainname, const char * dirname)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
char * bind_textdomain_codeset(const char * domainname, const char * codeset)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
char *ctermid(char *s)
{
    return s;
}

__attribute__((annotate("ALLOC_STACK_RET")))
char * dcgettext(const char * domainname, const char * msgid, int category)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
char * dgettext(const char * domainname, const char * msgid)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
char * dngettext(const char * domainname, const char * msgid, const char * msgid_plural, unsigned long int n)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
struct group *getgrgid(unsigned int gid)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
struct group *getgrnam(const char *name)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
struct hostent *gethostbyaddr(const void *addr, unsigned int len, int type)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
struct hostent *gethostbyname(const char *name)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
struct hostent *gethostbyname2(const char *name, int af)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
struct mntent *getmntent(void *stream)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
struct protoent *getprotobyname(const char *name)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
struct protoent *getprotobynumber(int proto)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
struct passwd *getpwent(void)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
struct passwd *getpwnam(const char *name)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
struct passwd *getpwuid(unsigned int uid)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
struct servent *getservbyname(const char *name, const char *proto)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
struct servent *getservbyport(int port, const char *proto)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
struct spwd *getspnam(const char *name)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
char * gettext(const char * msgid)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
struct tm *gmtime(const void *timer)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
const char *gnu_get_libc_version(void)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
const char * gnutls_check_version(const char * req_version)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
struct lconv *localeconv(void)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
struct tm *localtime(const void *timer)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
char * ngettext(const char * msgid, const char * msgid_plural, unsigned long int n)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
void *pango_cairo_font_map_get_default(void)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
char *re_comp(const char *regex)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
char *setlocale(int category, const char *locale)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
char *tgoto(const char *cap, int col, int row)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
char *tparm(char *str, ...)
{
    return NULL;
}

__attribute__((annotate("ALLOC_STACK_RET")))
const char *zError(int a)
{
    return NULL;
}


typedef int napi_status;
typedef void* napi_env;
typedef void* napi_callback_info;
typedef void* napi_value;
typedef void napi_valuetype;
typedef void* napi_typedarray_type;
typedef void* napi_finalize;
typedef void* napi_callback;
#define napi_ok 0


napi_status napi_get_cb_info(napi_env env, napi_callback_info cbinfo, size_t* argc, napi_value* argv, napi_value* thisArg, void** data) {
    for (size_t i = 0; i < *argc; i++) {
        argv[i] = cbinfo;
    }
    thisArg = cbinfo;
    data = cbinfo;
    return napi_ok;
}


napi_status napi_typeof(napi_env env, napi_value value, napi_valuetype* result) 
{
    result = value;
    return napi_ok;
}


napi_status napi_get_value_int64(napi_env env, napi_value value, int64_t* result)
{
    *result = (int64_t)(uintptr_t)value;
    return napi_ok;
}


napi_status napi_create_int64(napi_env env, int64_t value, napi_value* result){
    *result = (napi_value)(uintptr_t)value;
    return napi_ok;
}

napi_status napi_create_int32(napi_env env, int32_t value, napi_value* result){
    *result = (napi_value)(uintptr_t)value;
    return napi_ok;
}

napi_status napi_create_uint32(napi_env env, uint32_t value, napi_value* result){
    *result = (napi_value)(uintptr_t)value;
    return napi_ok;
}

napi_status napi_create_double(napi_env env, double value, napi_value* result){
    *result = (napi_value)(uintptr_t)value;
    return napi_ok;
}

napi_status napi_get_value_int32(napi_env env, napi_value value, int32_t* result){
    *result = (int32_t)(uintptr_t)value;
    return napi_ok;
}

napi_status napi_get_value_uint32(napi_env env, napi_value value, uint32_t* result){
    *result = (uint32_t)(uintptr_t)value;
    return napi_ok;
}

napi_status napi_get_value_double(napi_env env, napi_value value, double* result){
    *result = (double)(uintptr_t)value;
    return napi_ok;
}

napi_status napi_get_value_bool(napi_env env, napi_value value, bool* result){
    *result = (bool)(uintptr_t)value;
    return napi_ok;
}

napi_status napi_create_bigint_int64(napi_env env, int64_t value, napi_value* result){
    *result = (napi_value)(uintptr_t)value;
    return napi_ok;
}

napi_status napi_create_bigint_uint64(napi_env env, uint64_t value, napi_value* result){
    *result = (napi_value)(uintptr_t)value;
    return napi_ok;
}

napi_status napi_create_bigint_words(napi_env env, int sign_bit, size_t word_count, const uint64_t* words, napi_value* result){
    *result = (napi_value)(uintptr_t)words;
    return napi_ok;
}

napi_status napi_get_value_bigint_int64(napi_env env, napi_value value, int64_t* result, bool* lossless){
    *result = (int64_t)(uintptr_t)value;
    *lossless = (bool)(uintptr_t)value;
    return napi_ok;
}

napi_status napi_get_value_bigint_uint64(napi_env env, napi_value value, uint64_t* result, bool* lossless){
    *result = (uint64_t)(uintptr_t)value;
    *lossless = (bool)(uintptr_t)value;
    return napi_ok;
}

napi_status napi_get_value_bigint_words(napi_env env, napi_value value, int* sign_bit, size_t* word_count, uint64_t* words){
    *sign_bit = (int)(uintptr_t)value;
    *word_count = (size_t)(uintptr_t)value;
    *words = (uint64_t)(uintptr_t)value;
    return napi_ok;
}

napi_status napi_create_string_utf16(napi_env env, const char16_t* str, size_t length, napi_value* result){
    *result = (napi_value)(uintptr_t)str;
    return napi_ok;
}

napi_status napi_create_string_utf8(napi_env env, const char* str, size_t length, napi_value* result){
    *result = (napi_value)(uintptr_t)str;
    return napi_ok;
}

napi_status napi_create_string_latin1(napi_env env, const char* str, size_t length, napi_value* result){
    *result = (napi_value)(uintptr_t)str;
    return napi_ok;
}

napi_status napi_get_value_string_utf16(napi_env env, napi_value value, char16_t* buf, size_t bufsize, size_t* result){
    buf = (char16_t*)value;
    return napi_ok;
}

napi_status napi_get_value_string_utf8(napi_env env, napi_value value, char* buf, size_t bufsize, size_t* result){
    buf = (char*)value;
    return napi_ok;
}

napi_status napi_get_value_string_latin1(napi_env env, napi_value value, char* buf, size_t bufsize, size_t* result){
    buf = (char*)value;
    return napi_ok;
}

napi_status napi_is_array(napi_env env, napi_value value, bool* result){
    *result = (bool)(uintptr_t)value;
    return napi_ok;
}

napi_status napi_get_array_length(napi_env env, napi_value value, uint32_t* result){
    *result = (uint32_t)(uintptr_t)value;
    return napi_ok;
}

napi_status napi_create_array(napi_env env, napi_value* result){
    return napi_ok;
}

napi_status napi_create_array_with_length(napi_env env, size_t length, napi_value* result){
    return napi_ok;
}

napi_status napi_get_element(napi_env env, napi_value object, uint32_t index, napi_value* result){
    *result = (napi_value)(uintptr_t)object;
    return napi_ok;
}

napi_status napi_set_element(napi_env env, napi_value object, uint32_t index, napi_value value){
    return napi_ok;
}
napi_status napi_has_element(napi_env env, napi_value object, uint32_t index, bool* result){
    *result = (bool)(uintptr_t)object;
    return napi_ok;
}

napi_status napi_delete_element(napi_env env, napi_value object, uint32_t index, bool* result){
    *result = (bool)(uintptr_t)object;
    return napi_ok;
}

napi_status napi_create_dataview(napi_env env, size_t byte_length, napi_value arraybuffer, size_t byte_offset, napi_value* result){
    *result = (napi_value)(uintptr_t)arraybuffer;
    return napi_ok;
}


napi_status napi_is_dataview(napi_env env, napi_value value, bool* result) {
    *result = (bool)(uintptr_t)value;
    return napi_ok;
}

napi_status napi_get_dataview_info(napi_env env, napi_value dataview, size_t* byte_length, void** data, napi_value* arraybuffer, size_t* byte_offset){
    *byte_length = (size_t)(uintptr_t)dataview;
    *data = (void*)(uintptr_t)dataview;
    *arraybuffer = (napi_value)(uintptr_t)dataview;
    *byte_offset = (size_t)(uintptr_t)dataview;
    return napi_ok;
}

napi_status napi_is_typedarray(napi_env env, napi_value value, bool* result) {
    *result = (bool)(uintptr_t)value;
    return napi_ok;
}

napi_status napi_create_typedarray(napi_env env, napi_typedarray_type type, size_t length, napi_value arraybuffer, size_t byte_offset, napi_value* result){
    *result = (napi_value)(uintptr_t)arraybuffer;
    return napi_ok;
}

napi_status napi_get_typedarray_info(napi_env env, napi_value typedarray, napi_typedarray_type* type, size_t* length, void** data, napi_value* arraybuffer, size_t* byte_offset){
    *type = (napi_typedarray_type)(uintptr_t)typedarray;
    *length = (size_t)(uintptr_t)typedarray;
    *data = (void*)(uintptr_t)typedarray;
    *arraybuffer = (napi_value)(uintptr_t)typedarray;
    *byte_offset = (size_t)(uintptr_t)typedarray;
    return napi_ok;
}

napi_status napi_create_buffer_copy(napi_env env, size_t length, const void* data, void** result_data, napi_value* result){
    *result_data = (void*)(uintptr_t)data;
    *result = (napi_value)(uintptr_t)data;
    return napi_ok;
}

napi_status napi_create_external_buffer(napi_env env, size_t length, void* data, napi_finalize finalize_cb, void* finalize_hint, napi_value* result){
    *result = (napi_value)(uintptr_t)data;
    return napi_ok;
}

napi_status napi_get_buffer_info(napi_env env, napi_value value, void** data, size_t* length){
    *data = (void*)(uintptr_t)value;
    *length = (size_t)(uintptr_t)value;
    return napi_ok;
}


napi_status napi_is_buffer(napi_env env, napi_value value, bool* result){
    *result = (bool)(uintptr_t)value;
    return napi_ok;
}

napi_status napi_call_function(napi_env env, napi_value recv, napi_value func, size_t argc, const napi_value* argv, napi_value* result){
    *result = func;
    return napi_ok;
}


napi_status napi_create_function(napi_env env, const char* utf8name, size_t length, napi_callback cb, void* data, napi_value* result){
    *result = (napi_value)(uintptr_t)cb;
    return napi_ok;
}


napi_status napi_coerce_to_bool(napi_env env, napi_value value, napi_value* result){
    *result = value;
    return napi_ok;
}

napi_status napi_coerce_to_number(napi_env env, napi_value value, napi_value* result){
    *result = value;
    return napi_ok;
}

napi_status napi_coerce_to_object(napi_env env, napi_value value, napi_value* result){
    *result = value;
    return napi_ok;
}

napi_status napi_coerce_to_string(napi_env env, napi_value value, napi_value* result){
    *result = value;
    return napi_ok;
}

napi_status napi_create_date(napi_env env, double time, napi_value* result){
    *result = (napi_value)(uintptr_t)time;
    return napi_ok;
}

napi_status napi_get_date_value(napi_env env, napi_value value, double* result){
    *result = (double)(uintptr_t)value;
    return napi_ok;
}

napi_status napi_is_date(napi_env env, napi_value value, bool* result){
    *result = (bool)(uintptr_t)value;
    return napi_ok;
}

napi_status napi_get_prototype(napi_env env, napi_value object, napi_value* result){
    *result = (napi_value)(uintptr_t)object;
    return napi_ok;
}

napi_status napi_get_property_names(napi_env env, napi_value object, napi_value* result){
    *result = (napi_value)(uintptr_t)object;
    return napi_ok;
}

napi_status napi_has_property(napi_env env, napi_value object, napi_value key, bool* result){
    *result = (bool)(uintptr_t)object;
    return napi_ok;
}

napi_status napi_get_property(napi_env env, napi_value object, napi_value key, napi_value* result){
    *result = (napi_value)(uintptr_t)object;
    return napi_ok;
}

napi_status napi_delete_property(napi_env env, napi_value object, napi_value key, bool* result){
    *result = (bool)(uintptr_t)object;
    return napi_ok;
}

napi_status napi_has_own_property(napi_env env, napi_value object, napi_value key, bool* result){
    *result = (bool)(uintptr_t)object;
    return napi_ok;
}

napi_status napi_has_named_property(napi_env env, napi_value object, const char* utf8Name, bool* result){
    *result = (bool)(uintptr_t)object;
    return napi_ok;
}

napi_status napi_get_named_property(napi_env env, napi_value object, const char* utf8Name, napi_value* result){
    *result = (napi_value)(uintptr_t)object;
    return napi_ok;
}

napi_status napi_get_all_property_names(napi_env env, napi_value object, void* key_mode, void* key_filter, void* key_conversion, napi_value* result){
    *result = (napi_value)(uintptr_t)object;
    return napi_ok;
}
