<template>
  <div>
    <School></School>
    <Student></Student>
  </div>
</template>

<script>
// 引入组件
import School from "./School.vue";
import Student from "./Student.vue";

export default {
  name: "App",
  // 将组件放入components中
  components: {
    School,
    Student,
  },
};
</script>

<style>
</style>