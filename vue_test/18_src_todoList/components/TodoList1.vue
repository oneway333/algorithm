<template>
  <div>
    <ul v-for="a of affairs" :key="a.id">
      <li>
        <!-- v-bind主要是为了传输表达式的值，而不是一个字符串 -->
        <!-- 靠props传递数据 -->
        <!-- 消息的发布与订阅 -->
        <!-- 还真可以写好几个 -->
        <Item @checks="checks" @itemDelete="itemDelete" :item="a"/>
      </li>
    </ul>
    <div class="footer">
      <div class="stat">
        <input @click="tcheck" type="checkbox" :checked="fcheck" /> done {{ done }} / total {{ total }}
      </div>

      <button @click="doneDelete">fuck</button>
    </div>
  </div>
</template>

<script>
import Item from "./Item.vue";
export default {
  name: "TodoList1",
  components: {
    Item,
  },
  data() {
    return {
      affairs: [
        { id: 1, name: "fuck", check: false },
        { id: 2, name: "shit", check: false },
        { id: 3, name: "damn", check: false },
      ],
      done: 0,
      fcheck: false
    };
  },
  methods: {
    checks(obj){
      // console.log(obj);
      this.affairs.forEach(a => {if(obj.id == a.id) a.check = obj.check})
    },
    tcheck(e){
      // console.log(e.target.checked); 
      this.affairs.forEach(a => a.check = e.target.checked)
    },
    doneDelete(){
      const t = []
      this.affairs.forEach(a => {if(!a.check) t.push(a)})
      this.affairs = t;
    },
    itemDelete(id){
      const t = []
      this.affairs.forEach(a => {if(id != a.id) t.push(a)})
      this.affairs = t;
    },
  },
  watch: {
    affairs: {
      deep: true,
      immediate: true,
      handler(){
        let n = 0;
        this.affairs.forEach(a => {if(a.check) n++})
        this.done = n
        if(this.affairs.length != 0 && n == this.affairs.length) this.fcheck = true
        else this.fcheck = false
      }
    }
  },
  computed: {
    total(){
      return this.affairs.length
    }
  },
  mounted() {
    // 要放在生命周期钩子里
    this.$bus.$on("addItem", (obj) => {
      this.affairs.push(obj);
    });
  },
  // 及时断开这个循环，不然不会被销毁的
  beforeDestroy(){
        this.$bus.$off('addItem')
    }

};
</script>

<style>
li {
  list-style: none;
}
.footer {
  display: flex;
  justify-content: space-between;
  align-items: center;
  border: 1px solid yellow;
  height: 40px;
}

.footer button {
  background-color: red;
  height: 30px;
  width: 60px;
  font-size: 20px;
  display: none;
}
.footer:hover button {
  display: inline-block;
}
</style>