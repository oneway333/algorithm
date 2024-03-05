<template>
  <div id="app">
    <h1 v-text="msg" ref="msg"></h1>
    <button ref="btn" @click="previous">previous</button>
    <School ref="sch" ></School>
    <!-- 通过给age绑定，使age转为number -->
    <Student name="fuck" :age="11" gender="male" v-bind="{fuck: 1, shit: 2}"></Student>
  </div>
</template>

<script>
// import HelloWorld from "./components/HelloWorld.vue";
import School from "./components/School.vue";
import Student from "./components/Student.vue";


export default {
  name: "App",
  components: {
    // HelloWorld,  
    School,
    Student,
  },
  data () {
    return {
      msg: 'fuck',
    }
  },
  methods: {
    previous(){
      // console.log(e.previousElementSibling) // 失效了
      // 获取打上ref标记的元素，还可以返回打上ref的组件实例对象
      console.log(this.$refs.msg, this.$refs.btn, this.$refs.sch);
    }
  }
};
</script>

<style>
#app {
  /* 字体族 */
  font-family: Avenir, Helvetica, Arial, sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  text-align: center;
  color: #2c3e50;
  margin-top: 60px;
}
</style>
