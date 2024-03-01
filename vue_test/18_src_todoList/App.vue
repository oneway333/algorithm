<template>
  <div id="app">
    <TodoInput></TodoInput>
    <TodoList1 />
  </div>
</template>

<script>
import TodoInput from './components/TodoInput.vue'
import TodoList1 from './components/TodoList1.vue'


export default {
  name: "App",
  components: {
    TodoInput,
    TodoList1,
  },  
};
</script>

<style>
  *{
    margin: 0;
    padding: 0;
  }
#app {
  /* 字体族 */
  font-family: Avenir, Helvetica, Arial, sans-serif;
  margin: 50px auto;  
  padding: 0;
  width: 500px;
}
</style>
