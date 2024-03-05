<template>

  <!-- 爷爷 A App
     父亲 B router-view
          儿子 C router-link
     叔叔 D router-view
这两个routerview都会出来，这个router-view真的神奇。当然真正布局应该也不会这么去写吧 -->
  <div class="container">
    <Father></Father>
    <Uncle></Uncle>
  </div>
</template>

<script>
import Father from './components/Father'
import Uncle from './components/Uncle'

export default {
  name: 'App',
  components: {
    Father,
    Uncle
  },
}

</script>

<style scoped></style>
