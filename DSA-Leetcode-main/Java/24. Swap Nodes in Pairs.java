class Solution {
  public ListNode swapPairs(ListNode head) {
      if(head == null || head.next == null) {
          return head;
      }
      ListNode tHead = swapPairs(head.next.next);
      ListNode temp = head.next;
      head.next = tHead;
      temp.next = head;
      return temp;
  }
}