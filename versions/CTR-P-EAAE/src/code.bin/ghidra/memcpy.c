void * memcpy(void *__dest,void *__src,size_t __n)

{
  __rt_memcpy(__dest,__src,__n);
  return __dest;
}
