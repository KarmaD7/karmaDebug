// printing for debug
#ifdef TRACE_F
  #define TRACE_ENTRY printf("[trace] %s:entry\n", __func__)
  #define TRACE_EXIT printf("[trace] %s:exit\n", __func__)
#else
  #define TRACE_ENTRY ((void)0)
  #define TRACE_EXIT ((void)0)
#endif

#ifdef LOCAL_DEBUG
  #define debug(fmt, ...) (printf(fmt" line : %d \n",##__VA_ARGS__,__LINE__));
#else
  #define debug(...)
#endif
